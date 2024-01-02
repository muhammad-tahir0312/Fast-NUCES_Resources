#include<iostream>
#include<string.h>

using namespace std;

class Car{
	protected:
		string model;
		double price;
		
	public:	
		Car(){	}	
	Car(string a, double b){
			model = a;
			price = b;
		}
		
	void Setmodel(string c){
			model = c;
		}
		
	virtual void SetPrice(double pr)=0;	// virtual fnc.
	
		
		string GetModel(){
			return model;
		}
		
		double GetPrice(){
			return price;
		}
};

class Color : public Car{
	private:
		string color;
	public:
		Color() : Car(){   }	
	Color(string m, double p, string co) : Car(m,p){
			color=co;
	}
		void SetColor(string c){
			color=c;
		}

		string GetColor(){
			return color;
		}
	
		void SetPrice(double p){
			price = p;
		}
};

class Company : public Car{
	private:
		string companyname;
	public:
		Company() : Car(){  	}	
	Company(string m, double p, string company) : Car(m , p){
			this->companyname=company;
	}	
	
	void SetPrice(double pr){
		price=pr;
	}
	
	string GetCompany(){
		return companyname;
	}
};

int main(){
	
	Color col("Altis X Manual 1.6",  3749000, "Black");
	Company comp("Altis X Automatic 1.6", 3929000, "Corolla");

	
	col.SetPrice(6000.00);
	comp.SetPrice(7500.00);
	
	cout << "Details: " << endl;
	cout << "\n\tModel: " << comp.GetModel() << "\n\tCompany Name: " << comp.GetCompany() << "\n\tPrice: " << comp.GetPrice() << "\n\tColor: " << col.GetColor() << endl;
	
	return 0; 
}

