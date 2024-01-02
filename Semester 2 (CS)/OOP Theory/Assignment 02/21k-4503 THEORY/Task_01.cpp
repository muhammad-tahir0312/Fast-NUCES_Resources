#include<iostream>
#include<string>

using namespace std;

class Ticket{
	private:
		string Name;
		string D_City;
		string A_City;
		int Flight_no;
		double Price;
	public:
		Ticket(){	}		// DEF. CONST.
		Ticket(string N, string D, string A, int F, double P){
			Name = N;
			D_City = D;
			A_City = A;
			Flight_no = F;
			Price = P;
		}
		
	//SET FUNCTIONS
	void SetName(string N){
		Name = N;
	}
	void SetD_City(string D){
		D_City = D;
	}
	void SetA_City(string A){
		A_City = A;
	}
	void SetFlight_no(int F){
		Flight_no = F;
	}
	void SetPrice(double P){
		Price = P;
	}	
	//GET FUNCTIONS	
	string GetName(){
		return Name;
	}
	string GetD_City(){
		return D_City;
	}
	string GetA_City(){
		return A_City;
	}
	int GetFlight_no(){
		return Flight_no;
	}
	double GetPrice(){
		return Price;
	}
	double getprice(){
		return Price;
	}
	//  EXTRA FUNCTION
	void Display(){
		cout << "\tName: " << Name << "\n\tDeparture city: " << D_City << "\n\tArrival city: " << A_City << "\n\tFlight Number: " << Flight_no << "\n\tPrice: " << Price << endl; 
	}

};

class PREMIUM_TICKET : public Ticket{
	private:
		int Seat_no;
	public:
		PREMIUM_TICKET(){	}	// Def. Const.
		PREMIUM_TICKET(int S, string N, string D, string A, int F, double P):Ticket(N, D, A, F, P){
			Seat_no = S;
		}
	// SET FUNCTION
	void SetSeat_no(int S){
		Seat_no = S;
	}
	// GET FUNCTION
	int GetSeat_no(){
		return Seat_no;
	}
	double GetPrice(){
		double t = getprice();
		return t + (t * 0.25);	// 25% MORE PRICE
	}
	//  EXTRA FUNCTION
	void Display(){
		cout << "\tName: " << GetName() << "\n\tDeparture city: " << GetD_City() << "\n\tArrival city: " << GetA_City() << "\n\tSeat Number: " << Seat_no << "\n\tFlight Number: " << GetFlight_no() << "\n\tPrice: " << GetPrice() << endl; 
	}		
};

int main(){
	
	Ticket T("Tahir","Lahore","Karachi",422,12000.5);
	cout << "Base Class : TICKET " << endl;
	
	T.Display();
	
	cout << endl << endl;
	
	PREMIUM_TICKET X(780,"Qasim","Queta","Punjab",654,12000.5);
	cout << "Derived Class : PREMIUM_TICKET " << endl;
	
	X.Display();
	
 	return 0 ;
}

