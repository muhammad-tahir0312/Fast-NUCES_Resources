#include<iostream>
using namespace std;

int Func(int a){
	
	int sum=0;
	
	if(a<=0){
		return 0;
	}
	
	for(int i=1; i<=a; ++i){
		if(a % i == 0){
			cout << "Factor is: "<< i << endl;
			sum += i;
		}
	}
	
	return sum;
}


int main(){
	
	int a,sum=0;
	
	cout<<"Enter a positive int: ";
	cin>>a;
	
	sum = Func(a);
	
	cout<<endl<<"Sum= " << sum;
	
	return 0;
}
