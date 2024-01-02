#include<iostream>
using namespace std;

void input();
float Low(float h_r,float c_t,float salary);
float others(float h_r,float c_t,float salary);

int main()
{
	
	input( );
	
 	return 0 ;
}

void input(){

	float h_r, c_t, salary;
	char choice;	
	float bill;
	
	cout << "Enter Hourly Rate: ";
	cin >>h_r;
	cout << "Enter Total Consulting Time(in mins): ";
	cin >>c_t;
	cout << "Do You Have Low Income?? Y or N: ";
	cin >>choice;
	cout << "Enter Salary: ";
	cin >>salary;

		if(choice=='Y' || choice=='y'){
			bill = Low(h_r,c_t,salary);
			cout << "\nYour Bill = " << bill;
			}
		else if(choice=='N' or 'n'){
			bill = others(h_r,c_t,salary);
			cout << "\nYour Bill = " << bill;
			}
		else
			cout << "\n\nInput Error!";
}
	
float Low(float h_r,float c_t,float salary){
	float bill;
		
	if(salary<=25000 && c_t<=30){
			bill = 0;
		}
	else{
		bill = 0.40 * h_r * ((c_t - 30)/60);
	}
	return bill;
}

float others(float h_r,float c_t,float salary){
	float bill;
	
	if(c_t<=20.00)
        {
            bill = 0;
        }
    else
        {
            bill = 0.70 * h_r * ((c_t - 20)/60);
        }
	
	return bill;
}


