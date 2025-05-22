"""
This is the main entry point for the Vector Space Information Retrieval Model application.

The application allows users to search for relevant research papers based on a given query. It uses a custom TF-IDF vectorizer to compute the similarity between the query and the research papers, and displays the most relevant documents in a tree view.

The main functionality includes:
- Loading research papers from a directory
- Preprocessing the text of the research papers (removing punctuation, tokenizing, and stemming)
- Creating a custom TF-IDF vectorizer to compute the similarity between the query and the research papers
- Displaying the search results in a GUI with a search field and a tree view

The application also includes utility functions to load and save the TF-IDF matrix, vocabulary, and IDF values to disk to avoid recomputing them on each run.
"""

# Import necessary libraries
import os
import re
import string
import json
import sys
import numpy as np
from collections import defaultdict, Counter
from typing import List, Dict
from pathlib import Path
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QHBoxLayout, QLabel, QLineEdit, QPushButton, QTreeView, QToolTip
from PyQt5.QtGui import QStandardItemModel, QStandardItem, QIcon
from PyQt5.QtCore import QPoint
from nltk.stem import PorterStemmer

# Define constants
ALPHA = 0.05
STOPWORDS_FILE = Path('Stopword-List.txt')
DICTIONARY_FILE = Path('Dictionary.txt')
TFIDF_MATRIX_FILE = Path('tfidf_matrix.json')
VOCABULARY_FILE = Path('vocabulary.json')
IDF_FILE = Path('idf.json')
ICON_PATH = Path('path_to_your_icon.png')

# Function to load file
def load_file(file_path):
    # Open the file in read mode and return a list of words
    with file_path.open('r', encoding='latin-1') as file:
        return [word.strip() for word in file.readlines()]

# Load stopwords
STOPWORDS = load_file(STOPWORDS_FILE)

# GUI class for the application
class GUI(QWidget):
    def __init__(self, vector_space_model, research_papers):
        super().__init__()
        self.vector_space_model = vector_space_model
        self.research_papers = research_papers
        self.init_ui()

    # Initialize the UI
    def init_ui(self):
        # Create layout and set window properties
        layout = QVBoxLayout()
        self.setWindowTitle("Vector Space Information Retrieval Model")
        self.setWindowIcon(QIcon(str(ICON_PATH)))

        # Create search layout with label, input field and button
        search_layout = QHBoxLayout()
        search_label = QLabel("Enter Query:")
        search_label.setStyleSheet("font-size: 14pt;")
        self.search_field = QLineEdit()
        self.search_field.setStyleSheet("font-size: 14pt;")
        search_layout.addWidget(search_label)
        search_layout.addWidget(self.search_field)
        self.search_button = QPushButton("Search")
        self.search_button.setStyleSheet("font-size: 14pt; padding: 5px; background-color: #4CAF50; color: white;")
        self.search_button.clicked.connect(self.search)
        search_layout.addWidget(self.search_button)

        # Create tree view for displaying search results
        self.tree_view = QTreeView()
        self.tree_view.setStyleSheet("font-size: 14pt;")
        self.tree_view.setRootIsDecorated(False)
        self.tree_view.setAlternatingRowColors(True)
        self.tree_view.setHeaderHidden(True)
        self.tree_view.setModel(None)

        # Add search layout and tree view to the main layout
        layout.addLayout(search_layout)
        layout.addWidget(self.tree_view)
        self.setLayout(layout)

    # Function to handle search
    def search(self):
        # Disable search button during search process
        self.search_button.setEnabled(False)
        query = self.search_field.text()
        if query != '':
            # Process the query and get the results
            results = self.vector_space_model.process_queries([query])
            # Filter out the relevant documents based on similarity score
            relevant_docs = [(list(self.research_papers.keys())[idx], sim) for idx, sim in enumerate(results[query]) if sim >= ALPHA]
            # Sort the documents based on similarity score
            relevant_docs.sort(key=lambda x: x[1], reverse=True)
            if relevant_docs:
                # Display the relevant documents in the tree view
                model = QStandardItemModel()
                model.setHorizontalHeaderLabels(["Documents"])
                for doc in relevant_docs:
                    item1 = QStandardItem(doc[0])
                    model.appendRow([item1])
                self.tree_view.setModel(model)
            else:
                # If no relevant documents found, show a tooltip
                self.tree_view.setModel(None)
                QToolTip.showText(self.search_field.mapToGlobal(QPoint(0, 0)), "No results found for the given query.")
        else:
            # If query is empty, show a tooltip
            self.tree_view.setModel(None)
            QToolTip.showText(self.search_field.mapToGlobal(QPoint(0, 0)), "There is nothing to be searched.")
        # Enable search button after search process
        self.search_button.setEnabled(True)

    # Function to run the GUI
    def run(self):
        # Show the GUI and start the application
        self.show()
        sys.exit(app.exec_())

# Class for text preprocessing
class TextPreprocessor:
    def __init__(self, corpus: List[str]):
        self.corpus = corpus
        self.stemmer = PorterStemmer()
        self.token_pattern = re.compile(r"\w+(?:['-,]\w+)?|[^_\w\s]")
        self.dictionary = {}  # Initialize dictionary attribute here
        self.dictionary = self.load_or_create_dictionary()

    # Function to remove punctuation and numbers from text
    def remove_punctuation_and_numbers(self, text: str) -> str:
        # Use translate function to remove punctuation and numbers
        return text.translate(str.maketrans('', '', string.punctuation + string.digits))

    # Function to tokenize and stem the text
    def tokenize_and_stem(self, text: str) -> List[str]:
        # Remove punctuation and numbers, convert to lower case, tokenize and stem the text
        text = self.remove_punctuation_and_numbers(text.lower())
        tokens = self.token_pattern.findall(text)
        return [self.stemmer.stem(token) for token in tokens if token.isalpha() and token not in STOPWORDS]

    # Function to load or create dictionary
    def load_or_create_dictionary(self) -> Dict[str, int]:
        # Load the dictionary from file if it exists, otherwise create a new one
        if DICTIONARY_FILE.exists():
            with DICTIONARY_FILE.open('r') as file:
                self.dictionary = json.load(file)
        else:
            for doc in self.corpus:
                tokens = self.tokenize_and_stem(doc)
                for token in tokens:
                    self.dictionary[token] = self.dictionary.get(token, 0) + 1
            with DICTIONARY_FILE.open('w') as file:
                json.dump(self.dictionary, file)
        return self.dictionary

# Class to load research papers
class ResearchPapersLoader:
    def __init__(self, directory, file_count):
        self.directory = directory
        self.file_count = file_count

    # Function to generate file paths
    def generate_file_paths(self):
        # Generate file paths for all the research papers
        return [f'{self.directory}/{i}.txt' for i in range(1, self.file_count + 1) if os.path.exists(f'{self.directory}/{i}.txt')]

    # Function to load research papers
    def load_research_papers(self):
        # Load the content of all the research papers
        file_paths = self.generate_file_paths()
        research_papers = {}
        for path in file_paths:
            with open(path, 'r', encoding='latin-1') as file:
                content = file.read()
                research_papers[os.path.basename(path)] = content
        return research_papers

# Class for custom TF-IDF vectorizer
class CustomTfidfVectorizer:
    def __init__(self, tokenizer):
        self.tokenizer = tokenizer
        self.vocabulary_ = {}
        self.idf_ = []

    # Function to fit the vectorizer
    def fit(self, corpus):
        # Compute the IDF values for all the words in the corpus
        total_documents = len(corpus)
        document_count = defaultdict(int)
        for doc in corpus:
            words = set(self.tokenizer(doc))
            for word in words:
                document_count[word] += 1
        for word, count in document_count.items():
            self.vocabulary_[word] = len(self.vocabulary_)
            idf = 1 + np.log(total_documents / (1 + count))
            self.idf_.append(idf)
        return self

    # Function to transform the corpus
    def transform(self, corpus):
        # Compute the TF-IDF matrix for the corpus
        matrix = []
        for doc in corpus:
            words = self.tokenizer(doc)
            word_count = Counter(words)
            row = [0] * len(self.vocabulary_)
            for word, count in word_count.items():
                if word in self.vocabulary_:
                    tf = count / len(words)
                    idf = self.idf_[self.vocabulary_[word]]
                    row[self.vocabulary_[word]] = tf * idf
            matrix.append(row)
        return np.array(matrix)

    # Function to fit and transform the corpus
    def fit_transform(self, corpus):
        # Fit the vectorizer and transform the corpus
        self.fit(corpus)
        return self.transform(corpus)

# Class for vector space model
class VectorSpaceModel:
    def __init__(self, corpus: List[str]):
        self.corpus = corpus
        self.vectorizer = CustomTfidfVectorizer(tokenizer=TextPreprocessor(corpus).tokenize_and_stem)
        self.tfidf_matrix = self.load_or_compute_tfidf_matrix()
        self.inverted_index = self.create_inverted_index()

    # Function to load or compute TF-IDF matrix
    def load_or_compute_tfidf_matrix(self):
        # Load the TF-IDF matrix from file if it exists, otherwise compute a new one
        if TFIDF_MATRIX_FILE.exists() and VOCABULARY_FILE.exists() and IDF_FILE.exists():
            with TFIDF_MATRIX_FILE.open('r') as file:
                self.tfidf_matrix = np.array(json.load(file))
            with VOCABULARY_FILE.open('r') as file:
                self.vectorizer.vocabulary_ = json.load(file)
            with IDF_FILE.open('r') as file:
                self.vectorizer.idf_ = json.load(file)
        else:
            self.tfidf_matrix = self.vectorizer.fit_transform(self.corpus).tolist()
            with TFIDF_MATRIX_FILE.open('w') as file:
                json.dump(self.tfidf_matrix, file)
            with VOCABULARY_FILE.open('w') as file:
                json.dump(self.vectorizer.vocabulary_, file)
            with IDF_FILE.open('w') as file:
                json.dump(self.vectorizer.idf_, file)
        return self.tfidf_matrix

    # Function to create inverted index
    def create_inverted_index(self):
        # Create an inverted index for the corpus
        inverted_index = defaultdict(set)
        for idx, doc in enumerate(self.corpus):
            for word in TextPreprocessor(self.corpus).tokenize_and_stem(doc):
                inverted_index[word].add(idx)
        return inverted_index

    # Function to compute cosine similarity
    def compute_cosine_similarity(self, query):
        # Compute the cosine similarity between the query and all the documents
        query_vector = self.vectorizer.transform([query])[0]
        cosine_similarities = []
        for doc_vector in self.tfidf_matrix:
            dot_product = np.dot(query_vector, doc_vector)
            norm_query = np.linalg.norm(query_vector)
            norm_doc = np.linalg.norm(doc_vector)
            similarity = dot_product / (norm_query * norm_doc) if norm_query != 0 and norm_doc != 0 else 0
            cosine_similarities.append(similarity)
        return np.array(cosine_similarities)

    # Function to process queries
    def process_queries(self, queries):
        # Process the queries and return the results
        results = {}
        for query in queries:
            cosine_similarities = self.compute_cosine_similarity(query)
            results[query] = cosine_similarities
        return results

# Main function
if __name__ == "__main__":
    # Create a QApplication instance
    app = QApplication(sys.argv)

    # Define the directory containing the research papers and the number of files
    research_papers_dir = 'ResearchPapers'
    file_count = 30

    # Load the research papers
    loader = ResearchPapersLoader(research_papers_dir, file_count)
    research_papers = loader.load_research_papers()

    # Create a corpus from the research papers
    corpus = list(research_papers.values())

    # Create a vector space model from the corpus
    vector_space_model = VectorSpaceModel(corpus)

    # Create a GUI and run it
    gui = GUI(vector_space_model, research_papers)
    gui.run()