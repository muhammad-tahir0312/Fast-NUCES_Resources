#include<iostream>
#include<string>
#include<time.h>
#include <stdlib.h>

using namespace std;

class MovieTicket{
	private:
		int RowNumber;
		int SeatNumber;
		bool Flag;
		
	public:
		MovieTicket(int R, int S, bool F){
			RowNumber = R;
			SeatNumber = S;
			Flag = F;
		}
	// SET FUNCTIONS 
	void SetRowNumber(int S){
		RowNumber = S;
	}
	void SetSeatNumber(int R){
		SeatNumber = R;
	}
	void SetFlag(bool F){
		Flag = F;
	}
	// GET FUNCTIONS 
	int GetRowNumber(){
		return RowNumber;
	}
	int GetSeatNumber(){
		return SeatNumber ;
	}
	bool GetFlag(){
		if(Flag == 1)	// IF FLAG VALUE EQUALS TO 1 then, 
			cout << "Ticket is Availabe!" << endl;	// TICKET IS AVAILABLE
		else			// IF FLAG VALUE EQUALS TO 0 then, 
			cout << "Ticket Not Availabe!" << endl;	// TICKET IS NOT AVAILABLE
	}
	// APPLYING GIVEN CONDITIONS
	void Display(){
		cout << "\nRow Number: " << RowNumber << "\nSeat Number: " << SeatNumber << (Flag==1? "\nTicket Available":"\nTicket Not Available") << endl;
	}	
};

int main(){
	
	srand(time(0));// USING RANDOM FUNCTION TO GENERATE NUMBERS BETWEEN 1 & 0
	
	// OBJECT # 01
	cout << "Object #01: " << endl;
	
	MovieTicket MT1(1,3,(rand() % 2));	// USING RANDOM FUNCTION 
	MT1.Display();
	
	// OBJECT # 02
	int a;
	MovieTicket MT2(0,0,0);
	
	cout << "\nObject #02: " << endl << endl;

	cout << "Enter Row Number: " << endl;
	cin >> a;
	MT2.SetRowNumber(a);	// UPDATING CONSTRUCTOR'S VALUE USING SET FUNCTION
	
	cout << "Enter Seat Number: " << endl;
	cin >> a;
	MT2.SetSeatNumber(a);	// UPDATING CONSTRUCTOR'S VALUE USING SET FUNCTION
	
	MT2.SetFlag(rand() % 2);	// USING RANDOM FUNCTION 
	
	MT2.Display();

	return 0;
}

