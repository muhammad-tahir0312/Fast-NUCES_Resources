#include<iostream>
#include<string>
using namespace std;

class Invoice{
	private:
		string Number ;
		string Description ;
		int Quantity;
		int Price ;	
	public:
		
	Invoice(string N, string D, int Q, int P){
		Number = N;
		Description = D;
		Quantity = Q;
		Price = P;
	}
	
	void SetNumber(string N){
		Number = N;
	}
	void SetDescription(string D){
		Description = D;
	}
	void SetQuantity(int Q){
		Quantity = Q;
	}
	void SetPrice(int P){
		Price = P;
	}
	
	void GetNumber(){
		cout << "Number = " << Number << endl;
	}
	void GetDescription(){
		cout << "Description = " << Description << endl;
	}
	int GetQuantity(){
		if(Quantity<=0)
			return 0;
		else
			cout << "Quantity = " << Quantity << endl;
	}
	int GetPrice(){
		if(Price<=0)
			return 0;
		else
			cout << "Price = " << Price << endl;
	}	
	
	// GIVEN CONDITIONS FOR FUNCTIONS
	
	int GetInvoiceAmount(){
		int x = Quantity * Price;
		if(x>0)
			return x;
		else 
			return 0;
	}
};


int main(){

	Invoice I1("0","0",0,0);
	string a;
	int b;
	
	cout << "\nEnter Number in String: " << endl;
	cin >>a;
	I1.SetNumber(a);
	
	cout << "Enter Description in String: " << endl;
	cin >>a;
	I1.SetDescription(a);
	
	cout << "Enter Quantity in Int: " << endl;
	cin >>b;
	I1.SetQuantity(b);
	
	cout << "Enter Price in Int: " << endl;
	cin >>b;
	I1.SetPrice(b);
	
	I1.GetNumber();
	I1.GetDescription();
	I1.GetQuantity();
	I1.GetPrice();
	// CALLING GIVEN CONDITIONS (FUNCTIONS)
	cout << "\nTotal Ammount = " << I1.GetInvoiceAmount();
	
	
	return 0;
}

