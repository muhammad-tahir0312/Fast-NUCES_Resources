/*
			THIS PROGRAM CAN BE ALTERED USING SETTER FUNCTIONS TO SET NEW VALUES FOR 
					" AnnualInterestRate " & " SavingsBalance "
*/

#include <iostream>	
							
using namespace std;

class SavingsAccount{
	private:	
		static double AnnualInterestRate;
		double SavingsBalance;
	public:
		SavingsAccount(double A, double S){
			AnnualInterestRate = A;
			SavingsBalance = S;
		}
	//SET FUNCTIONS	
	void SetAnnualInterestRate(){
		cout << "Enter AnnualInterestRate: "<< endl;
		cin >> AnnualInterestRate;
	}
	void SetSavingsBalance(){
		cout << "Enter SavingsBalance: " << endl;
		cin >> SavingsBalance;
	}
	
	//GET FUNCTIONS	
	double GetAnnualInterestRate(){
		return AnnualInterestRate;
	}
	double GetSavingsBalance(){
		return SavingsBalance;
	}
	//EXTRA FUNCTIONS
	void CalculateMonthlyInterest(){
		
		SavingsBalance += (SavingsBalance * (AnnualInterestRate / 12)) / 100;
		
		cout << "MonthlyInterest = " << SavingsBalance << endl;
	}
	
	static void modifyInterestRate(double a){
		AnnualInterestRate = a;
		
		cout << endl << "New Annual Interest Rate = " << AnnualInterestRate << endl << endl;
	}
}; // END OF CLASS

double SavingsAccount::AnnualInterestRate=0.0; // INITIALIZATION OD STATIC VARIABLE

int main(){

	SavingsAccount SA1(3,2000); // Annual Interest Rate , Saving Balance OF OBJECT # 01
	SavingsAccount SA2(3,3000); // Annual Interest Rate , Saving Balance OF OBJECT # 02
	
	cout << "Saving Balance of User # 01: " << SA1.GetSavingsBalance() << endl;
	cout << "Saving Balance of User # 02: " << SA2.GetSavingsBalance() << endl;
	
	cout << "\nWith 3% Interest Rate: \n" << endl;
	cout << "\tUser # 01 ";
	SA1.CalculateMonthlyInterest();
	cout << "\tUser # 02 ";
	SA2.CalculateMonthlyInterest();
	
	// APPLYING GIVEN CONDITIONS
	
	SA1.modifyInterestRate(4);
	cout << "\tUser # 01 ";
	SA1.CalculateMonthlyInterest();
	cout << "\tUser # 02 ";
	SA2.CalculateMonthlyInterest();
	
	return 0;
}

