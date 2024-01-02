#include<iostream>
#include<string>

using namespace std;

class Animal{
	public:
		string Name;
		int Age;
	
	Animal(){	}
	Animal(string N, int A){
		Name = N;
		Age = A;
	}	
	~Animal(){
		delete this;
	}	
	void Walking(){
		cout<< Name << " can walk.";
	}
	void speaking(){
		cout<< Name << " can speak.";
	}	
};

int main(){
	
	Animal *ptr;
	
	int size=5;
	ptr = new Animal[size];
	
	for(int i=0; i<size; i++){
		cout << "Enter Name of your pet: "<< endl;
		fflush(stdin);
		getline(cin,ptr[i].Name);
		
		cout << "Enter Age of your pet: "<< endl;
		cin>> ptr[i].Age;
	}
	
	// selection sort
	int temp=0; string temp1;
	
	for(int i=0; i<size; i++){
		for(int j=i; j<size-1; j++){
			if(ptr[i].Age > ptr[j+1].Age){
				temp=ptr[j+1].Age;
				ptr[j+1].Age=ptr[i].Age;
				ptr[i].Age=temp;
				
				temp1=ptr[j+1].Name;
				ptr[j+1].Name=ptr[i].Name;
				ptr[i].Name=temp1;
			}
		}
	}

	//dislay
	cout<<"Sorted Array: " << end;
	for(int i=0; i<size; i++){
		cout << ptr[i].Name << " " << ptr[i].Age << endl;
	}
	
	return 0;
}
