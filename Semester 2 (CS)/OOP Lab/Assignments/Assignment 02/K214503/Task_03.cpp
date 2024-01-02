 #include<iostream>
 using namespace std;
 
 float pre(int , int);
 float reg(int mins);
 
int main(){
	float bill=0;
	int acc, mins, n_time, d_time;
	char  code;
	
	cout << "Enter User's account number: ";
	cin >>acc;
	cout <<"\nEnter customer code:\n\tR/r for regular, and P/p for premium service: ";
	cin >>code;

	if(code=='r' || code=='R'){
		cout << "\nEnter number of Mins: ";
		cin >>mins;
	bill = reg(mins);
		cout << "\nUser Account = " << acc << endl;
		cout << "Number of mins = " << mins << endl;
		cout << "\n\tUser Bill Due = " <<bill ;
	}
	else if(code=='p' || code=='P'){
		cout << "Enter number of Mins during Day-Time: ";
		cin >>d_time;
		cout << "\n\nEnter number of Mins during Night-Time: ";
		cin >>n_time;
		
	bill = pre(n_time, d_time);
		cout << "\nUser Account = " << acc << endl;
		cout << "Number of mins (Day-Time) = " << d_time << endl;
		cout << "Number of mins (Night-Time) = " << n_time << endl;
		cout << "\n\tUser Bill Due (Day-Time) & (Night-Time) = " <<bill ;
	}
	else cout << "\nInput Error! ";	
		
	return 0;
}

float reg(int mins){
		float bill;
		
	if(mins<=50){
		bill = 10;
	}
	else if (mins > 50){
		bill = (0.20 * (mins-50)) + 10;
	}
	
	return bill;	
}

float pre(int n_time, int d_time){
		float bill, x , c;
		
	if(d_time<=75){
		x = 0;
	}
	else if (d_time > 75){
		x = (0.10 * (d_time-75));
	}	
	if(n_time<=100){
		c = 0;
	}
	else if (n_time > 100){
		c = (0.05 * (n_time-100));
	}
	
	return bill = x + c + 25;	
}
