#include <iostream>
#include <string>

using namespace std;

class Person{
	private:
		int ID;
		string Name;
		double Salary;
	public:
		Person(){	}	// DEF . CONST.
		Person(int id, string N, double S){
			ID = id;
			Name = N;
			Salary = S;
		}
	// GET FUNCTIONS
	int GetID(){
		return ID;
	}
	string GetName(){
		return Name;
	}
	double GetSalary(){
		return Salary;
	}
	void GetData(int id, string N, double S){		// PARA . CONST.
		ID = id;
		Name = N;
		Salary = S;
	}
	void Bonus(double b){
		Salary = Salary * b;
	}
	// DISPLAY FUNCTION
	void DisplayData(){
		cout << "\tName: " << Name << "\n\tID: " << ID << "\n\tSalary: " << Salary << endl;
	}
};

class Admin : public Person{
	private:
		double Bonus;	// 5%
	public:
		Admin(){	}	// DEF . CONST.
		Admin(int id, string N, double S):Person(id, N, S){		// PARA . CONST.
			Bonus = 0;
		}	
	void Calculate_Bonus()
	{
		Bonus = GetSalary() * 12 * 0.05;
	}
	// DISPLAY FUNCTION
	void DisplayData(){
		cout << "\tName: " << GetName() << "\n\tID: " << GetID() << "\n\tSalary: " << GetSalary() << "\n\tAnnual Bonus: " << Bonus << endl;
	}
	
};

class Accounts : public Person{
	private:
		double Bonus;	// 10%
	public:
		Accounts(){	}	// DEF . CONST.
		Accounts(int id, string N, double S):Person(id, N, S){		// PARA . CONST.
			Bonus = 0;
		}
	void Calculate_Bonus()
	{
		Bonus = GetSalary() * 12 * 0.1;
	}
	// DISPLAY FUNCTION
	void DisplayData(){
		cout << "\tName: " << GetName() << "\n\tID: " << GetID() << "\n\tSalary: " << GetSalary() << "\n\tAnnual Bonus: " << Bonus << endl;
	}
	
	
};

int main(){
	
	Admin A1(4503,"Muhammad Tahir",120000);
	Accounts A2(4871,"Qasim",20000);
	
	A1.Calculate_Bonus();
	A2.Calculate_Bonus();
	
	cout << "OBJECT #01 " << endl;
	A1.DisplayData();
	cout << endl<< "OBJECT #02 " << endl;
	A2.DisplayData();
	
 	return 0;
}

