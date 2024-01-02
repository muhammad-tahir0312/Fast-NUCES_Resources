 #include<iostream>
 using namespace std;
 
 void input(float& bill);
 float residential(float p);
 float business(float p);
 
int main(){
	float Bill=0;
	
	input(Bill);
	cout << "\n\n\tUser Bill Due = " << Bill ;	
	
	return 0;
}

void input(float& bill){
	float acc,ser, pre;
	char  code;
	cout << "Enter User's account number: ";
	cin >>acc;
	cout <<"\nEnter customer code:\n\tR/r for residential, and B/b for business customer: ";
	cin >>code;
	cout << "\nEnter number of premium channels: ";
	cin >>pre;
	
	if(code=='r' || code=='R'){
		bill = residential(pre);
	}
	else if(code=='B' || code=='b'){
		bill = business(pre);
	}
	else cout << "\nInput Error! ";	
}

float residential(float p){
	float a=4.50,b=20.50,c=7.50, x;
	
	x = a + b + (c*p);
	
	return x;
}

float business(float p){
	float a=15.00,b=75.00,b2=5,c=50.00, x=0, y=0;
	
	if(p<=10)
		x = b*p;
	else if(p>10)
		x = b*p + 750;
	c *= p;
	y += a + c + x;
	
	return y;
}
