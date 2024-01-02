#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class Bank{
	private:
		double balance; // SETTING INITIAL BALANCE TO 'ZERO'
		int pin;
		
	public:
		string acctitle;
		char accnumber[20];
		char acctype;

	Bank(string title, char no[20], char type) // CONSTRUCTOR
		{
			this->acctitle=title;
			this->accnumber[20]=no[20];
			this->acctype=type;
			balance=0;
		}
		
	// SET FUNCTIONS
	void setbalance(int b)
		{
			this->balance=b;
		}
	void setpin(int p)
		{
			this->pin=p;
		}
	
	// GET FUNCTIONS
	double getbalance()
		{
			return balance;
		}

	int getpin()
		{
			return pin;
		}
		
	// APPLYING GIVEN CONDITIONS
	double deposit()
		{
			double depositmoney=0, newbalance=0;
			cout << "Enter how much money you want to deposit: ";
			cin >> depositmoney;
				if(depositmoney<=0)
					{
						cout << "Wrong input ";
					}
				else
					{
						balance = balance + depositmoney;
						
						return balance;
					}
		}
	double withdraw()
		{
			double withdrawmoney=0, newbalance=0;
			cout << "Enter how much money you want to withdraw: ";
			cin >> withdrawmoney;
				if(withdrawmoney>balance || withdrawmoney<=0)
					{
						cout << "Wrong input";
					}
				else
					{
						balance = balance-withdrawmoney;
						
						return balance;
					}
		}
	void bonus()
		{
			double bonus;
			bonus=(balance*0.05)+balance;
			
			setbalance(bonus);
		}		
};

int main(){
	
	int count=0, pin;
	string title;
	char type, number[20] , choice;
	double newbalance1=0, newbalance2=0;
	
	cout << "Enter Account Title (string): ";
	getline (cin , title);
	cout << "Enter Account Number (11 Digits Long): ";
	cin >> number;
	count = strlen(number);
	
	if(count<11)
		{
			cout << "Wrong Input!";
			exit(0);
		}
	else
	{
		cout << "Enter your four digit PIN (Int): ";
		cin >> pin;
		
		if(pin<1000 || pin >9999)
			{
				cout << "Wrong Input!";
				exit(0);
			}
		else
			{
				cout << "Enter account type: (S/C) \n";
				cin >> type;
				
					if(type=='S' || type=='C' || type=='s' || type=='c')
						{
							type = type;
						}
					else 
						{
							cout << "Wrong Input!";
							exit(0);
						}			
			}
	
		Bank b1(title, number, type);
			if(type=='S')
				{
					b1.bonus();
				}
			else if(type=='C')
				{
					cout << "No Bonus\n";
				}
			else
				{
					cout << " Wrong Input!";
					exit(0);
				}
		b1.setpin(pin);
		
	do
		{
			cout << "\t\t\n***MENU***\n\n\n1.Deposit\n2.Withdraw\n3.Exit";
			cout << "\nEnter your choice(1/2):\n";
			cin >> choice;
				if(choice=='1')
					{
						newbalance1=b1.deposit();
						cout<< "New Balance: \n" << newbalance1;
						
					}
				else if(choice=='2')
					{
						newbalance2=b1.withdraw();
						cout << "New Balance: \n" << newbalance2;
					}
		}
		while(choice!='3');
	}
} // END OF MAIN
