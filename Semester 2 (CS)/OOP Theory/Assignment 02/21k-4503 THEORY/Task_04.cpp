#include<iostream>
#include<string>

using namespace std;

// Pre declaration of classes
class MoneyMarketAccount;;
class CDAccount;

class BankAccount{
	private:
		string account_holder;
		double balance;
	public:
		BankAccount(){	}	// DEFAULT CONSTRUCTOR
		BankAccount(string name,double bal){	// PARA. CONSTRUCTOR
			account_holder=name;
			balance=bal;
		}
		// SET FUNCTIONS
		void set_account_holder(string name){
			account_holder=name;
		}
		void set_balance(double bal){
			balance=bal;
		}
		// GET FUNCTIONS	
		string get_account_holder(){
			return account_holder;
		}
		double get_balance(){
			return balance;
		}
		// EXTRA CLASS'S FUNCTIONS
		void Deposit(double amount){
			if(amount>=0){
				balance=balance+amount;
			}
			else{
				cout << "Invalid Amount." << endl;
			}
		}
		virtual int Withdraw(double amount){
			if(amount>=0){
				if(amount<=balance){
					balance=balance-amount;
					return 1;
				}
				else{
					cout << "Amount is exceeding the Balance." << endl;
					return 2;
				}
			}
			else{
				cout << "Invalid Amount." << endl;
			}
		}
	friend void Transfer(MoneyMarketAccount a,CDAccount b,double amount);	// FRIEND CLASS DECLARATION
}; 


class CDAccount : public BankAccount{
	private:
		double interest_rate;
	public:
		CDAccount(){	}	// DEFAULT CONSTRUCTOR
		CDAccount(string name,double bal,double i) : BankAccount(name,bal){		// PARA. CONSTRUCTOR
			interest_rate=i;
		}
		// SET FUNCTIONS
		void set_interest_rate(double i){
			interest_rate=i;
		}
		// GET FUNCTIONS
		double get_interest_rate(){
			return interest_rate;
		}
		// EXTRA CLASS'S FUNCTIONS
		void Deposit(double amount)	{
			double newbal;
			if(amount>=0){
				newbal=get_balance()+amount;
				set_balance(newbal);
			}
			else{
				cout << "Invalid Amount." << endl;
			}
		}
		int Withdraw(double amount)	{
			double annualinterest;
			annualinterest=(interest_rate*0.25)*100;
			double newbal;
			if(amount>=0){
				if(amount<=get_balance()){
					newbal=get_balance()-amount-annualinterest;
					set_balance(newbal);
					return 1;
				}
				else{
					cout << "Amount is exceeding the Balance." << endl;
					return 2;
				}
			}
			else{
				cout << "Invalid Amount." << endl;
			}
		}
	friend void Transfer(MoneyMarketAccount a,CDAccount b,double amount);	// FRIEND CLASS DECLARATION
};

class MoneyMarketAccount : public BankAccount{
	public:
		static int free_withdraw;
		static int no_withdraw;
		
		MoneyMarketAccount(){		}	// DEFAULT CONSTRUCTOR
		MoneyMarketAccount(string name,double bal) : BankAccount(name,bal){		}	// PARA. CONSTRUCTOR
		
		void Deposit(double amount)	{
			double newbal;
			if(amount>=0)
			{
				newbal=get_balance()+amount;
				set_balance(newbal);
			}
			else
			{
				cout << "Invalid Amount." << endl;
			}
		}
		// GET FUNCTIONS
		static int get_free(){
			return free_withdraw;
		}
		
		int Withdraw(double amount)	{
			double newbal;
			if(amount>=0){
				if(amount<=get_balance()){
					if(free_withdraw<2){
						newbal=get_balance()-amount;
						set_balance(newbal);
						free_withdraw++;
						no_withdraw++;
						return 1;
					}
					else if(free_withdraw>=2){
						newbal=get_balance()-(amount+50);
						set_balance(newbal);
						no_withdraw++;
						return 1;
					}
				}
				else{
					cout << "Amount is exceeding the Balance." << endl;
					return 2;
				}
			}
			else{
				cout << "Invalid Amount." << endl;
			}
		}
		static int get_no_whithdraw(){
			return no_withdraw;
		}
	friend void Transfer(MoneyMarketAccount ,CDAccount ,double);	// FRIEND CLASS DECLARATION
};

int MoneyMarketAccount::free_withdraw=0;		// INITIALIZATION OF STATIC VARIABLES
int MoneyMarketAccount::no_withdraw=0;			// INITIALIZATION OF STATIC VARIABLES

void Transfer(MoneyMarketAccount a,CDAccount b,double amount){		// FRIEND CLASS DEFINITION
	cout << amount << endl
		 << a.get_balance() << endl
		 << b.get_balance() << endl;
	if(amount<=a.get_balance()){
		b.set_balance(b.get_balance()+amount);
		a.set_balance(a.get_balance()-amount);
	}
	else{
		cout << "Funds cannot be transfered due to insufficient amount in CDAcoount." << endl;
	}
}


int main(){
	
	string name;
	double bal,dep,with,rate;
	int x,i=1,k=1,option,choice,j=1;
	
	MoneyMarketAccount m;	// OBJECT OF DERIVED CLASS
	
	CDAccount c;
	do{
		if(k==2){
			do{
				cout << "Do you want to Contine: " << endl;;
				cout << "1. Yes" <<  endl;
				cout << "2. No" << endl;
				cout << "Enter your Choice: ";
				cin >> choice;
				if(choice==1){
					break;
				}
				else if(choice==2){
					return 0;
				}
				else{
					cout << "Invalid Option." << endl;
					j++;
				}
			}while(j>0);
		}
		cout << "Enter the Account Holder Name: ";
		cin >> name;
		cout << "Enter the Balance: ";
		cin >> bal;
		cout << endl;
		cout << "1. Money Market Account." << endl;
		cout << "2. CD Acoount." << endl;
		cout << "Enter the Account Type: ";
		cin >> option;
		cout << endl;
		if(option==1){
			MoneyMarketAccount m(name,bal);
			BankAccount*ptr1=&m;
			cout << "Enter the Desposit Money: ";
			cin >> dep;
			ptr1->Deposit(dep);
			do{
				cout << "Enter the Withdraw Money(-1 to end): ";
				cin >> with;
				if(with == -1)				{
					k++;
					break;
				}
				x=m.Withdraw(with);
				if(x==1)				{
					cout << "Amount has been withdrawed. " <<endl;
					cout << "New Balance: " << m.get_balance() << endl << endl;
					i++;
				}
				else if (x==2)
				{
					cout << "Amount is Exceeding the Account Balance. " << endl << endl;
					i++;
				}
			}while(i>0);
			cout << "Number of Withdraws: " << m.get_no_whithdraw() << endl <<  endl;
		}
		else if(option==2)		{
			cout << "Enter the Interest Rate(in %): ";
			cin >> rate;
			CDAccount c(name,bal,rate);
			BankAccount*ptr2=&c;
			cout << "Enter the Amount to Deposit: ";
			cin >> dep;
			ptr2->Deposit(dep);
			cout << "Enter the Amount to Withdraw(-1 to end): ";
			cin >> with;
			if(with==-1)			{
				break;
			}
			x=c.Withdraw(with);
			if(x==1)			{
				cout << "Amount has been Withdrawed. " <<endl;
				cout << "New Balance: " << c.get_balance() << endl;
			}
			else if (x==2)			{
				cout << "Amount is Exceeding the Account Balance. " << endl;
			}
		}
		else		{
			cout << "Invalid Option." << endl;
			k++;
		}
	}while(k>0);
	cout << "1. Tansfer (MoneyMarket-CDAccount)" << endl;
	cout << "2. End" << endl;
	cout << "Enter Choice: ";
	cin >> choice;
	if(choice==1)	{
		int amount;
		cout << "Enter the Amount: ";
		cin >> amount;
		Transfer(m,c,amount);
	}
	else{
		return 0;
	}
	
	return 0;
}
