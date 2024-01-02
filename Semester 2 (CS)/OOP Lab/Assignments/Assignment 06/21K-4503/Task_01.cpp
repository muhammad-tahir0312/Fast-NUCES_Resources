 #include<iostream>
 #include<string>
 
 using namespace std;
 
class Books{	 // BASE CLASS
	private:
		string genre;
	public:	
	    Books(){}	//default
		Books(string g){	// overloaded CONSTRUCTOR
			genre = g;
		}
	// SET FUNCTIONS
	void SetGenre(string genre){
		this->genre = genre;
	}
	// GET FUNCTIONS
	string GetGenre(){
		return genre;
	}
};
 
class Derived_01 : public Books {	// DERIVED CLASS #01
	private:
		string Title;
		string Author;
		string Publisher;
	public:
		Derived_01(){}
		Derived_01(string g, string T, string A, string P):Books(g) // INITIALIZER LIST
		{
			SetTitle(T);
			SetAuthor(A);
			SetPublisher(P);
		}
	// SET functions 
	void SetTitle(string T){
		Title = T;
	}
	void SetAuthor(string A){
		Author = A;
	}
	void SetPublisher(string P){
		Publisher = P;
	}
	// GET functions 
	string GetTitle(){
		return Title;
	}
	string GetAuthor(){
		return Author;
	}
	string GetPublisher(){
		return Publisher;
	}
	// DISPLAY FUNCTIONS
	void Display(){
		cout << "\n\tTitle: " << Title << "\n\tGenre: " << Books::GetGenre() << "\n\tAuthor: " << Author << "\n\tPublisher: " << Publisher << endl;
	}
};
 
class Derived_02 : public Books {	 // DERIVED CLASS #02
	private:
		string Title;
		string Author;
		string Publisher;
	public:
		Derived_02(){}
		Derived_02(string g, string T, string A, string P):Books(g)
		{
	//		SetGenre(g);
			SetTitle(T);
			SetAuthor(A);
			SetPublisher(P);
		}
	// SET functions 
	void SetTitle(string T){
		Title = T;
	}
	void SetAuthor(string A){
		Author = A;
	}
	void SetPublisher(string P){
		Publisher = P;
	}
	// GET functions 
	string GetTitle(){
		return Title;
	}
	string GetAuthor(){
		return Author;
	}
	string GetPublisher(){
		return Publisher;
	}
	// DISPLAY FUNCTIONS
	void Display(){
		cout << "\n\tTitle: " << Title << "\n\tGenre: " << this->GetGenre() << "\n\tAuthor: " << Author << "\n\tPublisher: " << Publisher << endl;
	}
};
 
int main(){
		
	Derived_01 D1("Novel","Raja Gidh","Bano Qudsiyya","Naib Publishers"); // 1st OBJECT
	cout << "Book # 01" << endl;
	D1.Display();

	Derived_02 D2("Autobiographical Novel","Ali Pur Ka Eli","Mumtaz Mufti"," Al Faisal");	// 2nd OBJECT
	cout << endl << "Book # 02" << endl;
	D2.Display();

	return 0;
}
