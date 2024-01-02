#include<iostream>
using namespace std;
int main()
{
	
	int a;
	float b;
	char c;
	bool d;
	
	int *x = &a;
	float *y = &b;
	char *z = &c;
	bool *g = &d;
		
	cout << "Enter INT Value: ";
	cin >> *x; cout << endl;
	cout << "Enter FLOAT Value: ";
	cin >> *y; cout << endl;	
	cout << "Enter CHAR Value: ";	
	cin >> *z; cout << endl;
	cout << "Enter BOOL Value: ";
	cin >> *g; cout << endl;
	
	cout << "INT Value: " << *x << endl;
	cout << "FLOAT Value: " << *y << endl;	
	cout << "CHAR Value: " << *z << endl;	
	cout << "BOOL Value: " << *g << endl;	

	return 0;
}
