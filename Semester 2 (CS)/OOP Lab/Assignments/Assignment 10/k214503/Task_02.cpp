#include <iostream>
#include <string>

using namespace std;

class input{
	public:
		char inputArray[10];
};

int main(){
	input Input;
	
	cout << endl << "Enter values: " << endl;
	
	for(int i = 0; i < 10; i++)	{
		cin >> Input.inputArray[i];
	}
	
	char choice;
	
	cout << endl << "1. Integer \n2. Float \n3. Character" << endl;
	cout << endl << "Enter choice: ";
	cin >> choice;
	
	if(choice == '1'){
		for(int i = 0; i < 10; i++){
			cout << endl << (int)Input.inputArray[i] << endl;
		}
	}
	
	else if(choice == '2')	{
		for(int i = 0; i < 10; i++){
			cout << endl << (float)Input.inputArray[i] << endl;
		}
	}
	
	else if(choice == '3')	{
		for(int i = 0; i < 10; i++){
			cout << endl << (char)Input.inputArray[i] << endl;
		}
	}
	
	else
		exit(1);
	
	return 0;
}
