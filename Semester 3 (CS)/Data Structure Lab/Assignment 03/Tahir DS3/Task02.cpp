#include<iostream>
using namespace std;

int sum(int);

int R(int n){
	if(n==0){
		return 1;
	}
	else{
		sum(n);	
	}
}

int sum(int n){
	static int add=0, x=1;
	
	add += x++;
		cout<<endl<<"OKIE! "<<add;
		R(n-1);	
}

int main(){
	
	int x;
	
	cout<<"Enter Any Number: "<<endl;
	cin>>x;
	
	R(x);
	
	return 0;
}
