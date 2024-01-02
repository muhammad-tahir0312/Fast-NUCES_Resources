#include<iostream>
#include<string>
using namespace std;

class Patient{
	private:
		int ID;
		string Name;
		long long PhoneNumber;
		
	public:
		Patient(int ID=0, string Name="\0", long long PhoneNumber = 0){ // USING DEFAULT CONSTRUCTOR
			this->ID = ID;
			this->Name = Name;
			this->PhoneNumber = PhoneNumber;
		}
		
	// SET FUNCTIONS
	void SetID(int I){
		ID = I;
	}
	void SetName(string N){
		Name = N;
	}
	void SetPhoneNumber(long long P){
		PhoneNumber = P;
	}
	
	// GET FUNCTIONS 
	int GetID(){
		return ID;
	}
	string GetName(){
		return Name;
	}
	long long GetPhoneNumber(){
		return PhoneNumber;
	}
	
	// APPLYING GIVEN CONDITIONS
	void Dues(){
		char choice; float x;
		cout << "\n\tPlease Select From Below Category: " << endl;
		cout << "\tA -> General Doctors charge a basic fee of Rs 750." << endl;
		cout << "\tB -> Specialized Doctors charge a basic fee of Rs 1000." << endl;
		cin >> choice;
		switch(choice){
			case 'A':
				case 'a':
					x = ( 1200  * 0.05);
					x = x + 700 + 500;
					break;
			case 'B':
				case 'b':
					x = ( 1500  * 0.05);
					x += 1000 + 500;
					break;
			default:
				cout << "Invalid Input";
		}
		cout << "\t\tYour Total Dues = " << x << endl;		
	}
};

int main(){
	// OBJECT # 01
	// USING CONSTRUCTOR'S VALUES
	cout << "Patient #01: " << endl;
	cout << "\nPatient's Details: " << endl;
	Patient P1(258,"Ahmed",923122843582);	// CAN NOT INPUT NUMBER STARTING WITH ZERO 
											//   ( COMPILER THINKS IT IS IN "OCTAL")
	cout << "	ID: " << P1.GetID() << endl;
	cout << "	Name: " <<	P1.GetName() << endl;
	cout << "	Phone Number: +" << P1.GetPhoneNumber() << endl;
	P1.Dues();
	
	// OBJECT # 02
	// UPDATING CONSTRUCTOR VALUES USING SET FUNCTIONS
	cout << "\n\nPatient #02: " << endl;
	Patient P2;
	
	int x; string y; long long z;
	
	cout << "Enter Patient's ID: "<< endl;
	cin >> x;
	P2.SetID(x);
	cout << "Enter Patient's Name: " << endl;
	fflush(stdin);
	getline(cin, y);
	P2.SetName(y);
	cout << "Enter Patient's Phone Number: " << endl;
	cin >> z;
	P2.SetPhoneNumber(z);
	
	cout << "\nPatient's Details: " << endl;
	
	cout << "	ID: " << P2.GetID() << endl;
	cout << "	Name: " <<	P2.GetName() << endl;
	cout << "	Phone Number: +" << P2.GetPhoneNumber() << endl;
	P2.Dues();
	
	return 0;
}

