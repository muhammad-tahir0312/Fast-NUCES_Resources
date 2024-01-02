#include<iostream>
using namespace std;

int main(){
	
	int a,sum=0;
	
	cout<<"Enter a positive int: ";
	cin>>a;
	
	if(a<=0){
		cout<<"Exiting the program!";
		exit(0);
	}
	
	for(int i=1; i<=a; ++i){
		if(a % i == 0){
			cout << "Factor is: "<< i << endl;
			sum += i;
		}
	}
	
	cout<<endl<<"Sum= " << sum;
	
	return 0;
}
