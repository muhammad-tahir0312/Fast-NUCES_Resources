#include<iostream>
#include<string>
using namespace std;

class EmployeeBonus{
	private:
		float Salary;
	public:
		string Name, Position;
		int ID, NumberOfYears;
		
	// SET FUNCTIONS 
	void SetSalary(float S){
		Salary = S;
	}
	void SetName(string N){
		Name = N;
	}
	void SetPosition(string P){
		Position = P;
	}
	void SetID(int I){
		ID = I;
	}
	void SetNumberOfYears(int Y){
		NumberOfYears = Y;
	}
	
	// GET FUNSTIONS 
	string GetName(){
		return Name;
	}
	string GetPosition(){
		return Position;
	}
	int GetID(){
		return ID;
	}
	int GetNumberOfYears(){
		return NumberOfYears;
	}
	
	// APPLYING GIVEN CONDITIONS
	void Bonus(){
		float x;
		if(NumberOfYears> 0 && NumberOfYears<=6){
			x = (Salary * 5) / 100;
		}
		else if(NumberOfYears > 6 && NumberOfYears <= 12){
			x = (Salary * 10.5) / 100;
		}
		else if(NumberOfYears > 12 && NumberOfYears <= 18){
			x = (Salary * 12.5) / 100;
		}
		else if(NumberOfYears > 18){
			x = (Salary * 20) / 100;	
		}
		cout << "\tYour Salary With Bonus of (" << x << ") is " << Salary + x << endl;
	}
	void Display(){
		cout << "\n\nEmployee Details: " << endl;
		cout << "\tName: " << Name << endl;
		cout << "\tID: " << ID << endl;
		cout << "\tPosition: " << Position << endl;
		cout << "\tTime Spent In Company (in months) : " << NumberOfYears << endl;
	}
		
};

int main(){
	// CREATING OBJECT # 01
	EmployeeBonus EM;
	
	int I; string a; float b;
	
	// CALLING SET FUNCTIONS
	cout << "Enter Employee's ID: " << endl;
	cin >> I;
	EM.SetID(I);	
	cout << "Enter Employee's Name: " << endl;
	fflush(stdin);
	getline(cin , a);
	EM.SetName(a);	
	cout << "Enter Employee's Position: " << endl;
	fflush(stdin);
	getline(cin , a);
	EM.SetPosition(a);	
	cout << "Enter Employee's Salary: " << endl;
	cin >> b;
	EM.SetSalary(b);
	cout << "Enter Employee's Time Spent In The Company ( In Months ): " << endl;
	cin >> I;
	EM.SetNumberOfYears(I);
	
	// CALLING GET FUNCTIONS
	
	EM.Display();
	EM.Bonus();

	return 0;
}

