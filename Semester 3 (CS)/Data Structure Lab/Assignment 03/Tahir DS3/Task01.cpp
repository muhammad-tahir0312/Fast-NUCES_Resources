#include<iostream>
using namespace std;

int R(int n){
	static int sum=0, x=1;
	if(n==0){
		return 1;
	}
	else{
		sum += x++;
		cout<<endl<<"OKIE! "<<sum;
		R(n-1);
	}
}

int main(){
	
	int x;
	
	cout<<"Enter Any Number: "<<endl;
	cin>>x;
	
	R(x);
	
	return 0;
}
