#include<iostream>
using namespace std;

class Account{
		int balance;
	public:
		Account(int x=0){
			if(x>=0)
				balance = x;
			else 
				cout << "the initial balance was invalid."<< endl;
		}	
	
	void SetAmmount(int am){
		if(am>=0)
			balance = am;
	}
	
	void GetDebit(int y){
		if(y>=balance)
			cout << "Debit amount exceeded account balance." << endl;
		else 
			cout<< "Ammount left = " << balance - y << endl;
	}
	
	int GetBalance(){
		cout<< "Total Ammount in the Account = " << balance << endl;
	}
};
int main(){
	int x;
	Account Account1, Account2;
	
	cout << "User # 01:"<< endl<< endl;
	cout << "Enter Initial Ammout : ";
	cin >> x;
	Account1.SetAmmount(x);
	cout << "Enter Debit Ammout : ";
	cin >> x;
	Account1.GetDebit(x);
	Account1.GetBalance();
	
	cout << "\n\nUser # 02:"<< endl<< endl;
	cout << "Enter Initial Ammout : ";
	cin >> x;
	Account2.SetAmmount(x);
	cout << "Enter Debit Ammout : ";
	cin >> x;
	Account2.GetDebit(x);
	Account2.GetBalance();
	return 0;
}

