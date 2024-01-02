#include<iostream>
using namespace std;

class Employee{
	string F_Name;
	string L_Name;
	int Salary;
	
	public:
		Employee(string F_Name, string L_Name, int Salary){
			this->F_Name = F_Name;
			this->L_Name = L_Name;
			this->Salary = Salary;
		}
	
	void SetF_Name(string F){
		F_Name = F;
	}
	
	void SetL_Name(string L){
		L_Name = L;
	}	
	
	void SetSalary(int S){
		if(S>0)
			Salary = S;
		else 
			Salary = 0;
	}	
	
	void GetF_Name(){
		cout << "Your First Name is : " << F_Name << endl;
	}
	
	void GetL_Name(){
		cout << "Your Last Name is : " << L_Name << endl;
	}
	
	void GetSalary(){
		cout << "Your salary is : " << Salary << endl;
	}
	
	void GetN_salary(){
		cout << "Your salary with +10 Raise is: " << Salary * 1.1 << endl;
	}
	
};

int main(){
// OBJECT 1
Employee E1("Muhammad","Tahir",120000);// USING CONSTRUCTOR VALUES TO CHECK THE PROGRAM

cout << "Employee #01:" << endl;
E1.GetF_Name();
E1.GetL_Name();
E1.GetSalary();
E1.GetN_salary();

Employee E2("Qasim","Khan",-1324138);// GIVEN INPUT IS NEGATIVE TO CHECK THE PROGRAMS


// OBJECT 2
string a; int b;

cout << "\n\nEmployee #02:" << endl;
cout << "Enter First Name: " << endl;
cin >> a;
E2.SetF_Name(a);
cout << "Enter Last Name: " << endl;
cin >> a;
E2.SetL_Name(a);
cout << "Enter Salary: " << endl;
cin >> b;
E2.SetSalary(b); 

E2.GetF_Name();
E2.GetL_Name();
E2.GetSalary();

	return 0;
}

