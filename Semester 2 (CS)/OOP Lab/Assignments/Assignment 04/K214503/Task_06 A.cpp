#include<iostream>
#include<string>
using namespace std;

class Books{
	private:
		string Author, Title, Publisher;
		int Price, Stock_Position;
		
	public:
		Books(string A, string T, string P, int Pr, int S){
			Author = A;
			Title = T;
			Publisher = P;
			Price = Pr;
			Stock_Position = S;
		}
		
	void SetAuthor(string A){
		Author = A;
	}
	void SetTitle(string T){
		Title = T;
	}
	void SetPublisher(string P){
		Publisher = P;
	}
	void SetPrice(int P){
		Price = P;
	}
	void SetStock_Position(int S){
		Stock_Position = S;
	}
	
	string GetAuthor(){
		return Author;
	}
	string GetTitle(){
		return Title;
	}
	string GetPublisher(){
		return Publisher;
	}
	int GetPrice(){
		return Price;
	}
	int GetStock_Position(){
		return Stock_Position;
	}
	
	void GetAuthor_Title(string s, string ss){
		if(s == Author && ss == Title){
			int aa;
			cout << endl << "Author: " << Author << "\nTitle: " << GetTitle() << "\nPublisher: " << GetPublisher() << "\nPrice: " << GetPrice() << "\nStock Position: " << GetStock_Position() << endl;
			cout << endl << "Enter Number of copies you want: " << endl;
			cin >> aa;
				if(aa>0 && aa<=Stock_Position){
					cout << "Total Cost = " << Stock_Position * Price << endl;
				}
				else 
					cout << "Recquird Copies not in stock." << endl;			
		}
		else 
			cout << "Invalid Input!!!" << endl;
	}
};

int main(){
	string s,s2;
	int t;
	// OBJECT 01
	cout << "Object #01: " << endl;
	Books B1("Ernest","The Old Man and the Sea","Cayo Blanco",2500,1);	// USING CONSTRUCTOR'S VALUES
	cout << "Enter Title : " << endl;
	getline(cin, s2);
	cout << "Enter Author Name : " << endl;
	getline(cin, s);
	B1.GetAuthor_Title(s,s2);
	
	
	// OBJECT 02
	cout << endl << "Object #02: " << endl;
	Books B2("\0","\0","\0",0,0);
	
	// UPDATING VALUES USING SET FUNCTIONS
	cout << "Set Title: ";
	cin >> s;
	B2.SetTitle(s);
	cout << "Set/Update Author: ";
	cin >> s2;
	B2.SetAuthor(s2);
	cout << "Set/Update Publisher: ";
	cin >> s;
	B2.SetPublisher(s);
	cout << "Set/Update Price: ";
	cin >> t;
	B2.SetPrice(t);
	cout << "Set/Update Stock Position: ";
	cin >> t;
	B2.SetStock_Position(t);

	cout << "Enter Title : " << endl;
	fflush(stdin);
	getline(cin, s2);
	cout << "Enter Author Name : " << endl;
	fflush(stdin);
	getline(cin, s);
	B2.GetAuthor_Title(s,s2);
	
	return 0;
}

