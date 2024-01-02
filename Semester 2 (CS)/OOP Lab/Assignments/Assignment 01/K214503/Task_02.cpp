#include<iostream>
using namespace std;
int main()
{	
float arr[10], temp[10];	
	cout << "Enter 10 FLOAT numbers: "<<endl;
	for(int i=0; i<10; i++){
		cin >> arr[i];
	}
	
float max = 0; 	// FINDING MAX VALUE
	for(int i=0; i<10; i++){
		temp[i]= arr[i];
		if(max < arr[i]){
			max = arr[i];
		}
	}
// SUM of all the elements
float sum=0;
	for(int i=0; i<10; i++){
		sum += arr[i];
	}
	cout << "\nSUM of all the elements = "<< sum <<endl;
//Subtract the total from each element
cout << "\n\nSubtract the total from each element"<<endl;
	for(int i=0; i<10; i++){
		arr[i] -= sum;
	}	
	for(int i=0; i<10; i++){	// DISPLAYING ARRAY
		cout << "  " << arr[i];
	}
//Average of all the elements
float avg = sum / 10;
cout << "\n\nAverage of all the elements ="<< avg <<endl;

//Normalize the array (Divide each element of the array with maximum value)

	cout << "\n\nNormalizing the array :"<< endl;
	cout << "MAX = "<< max << endl<< endl;
for(int i=0; i<10; i++){
		temp[i] /= max;
	}	

for(int i=0; i<10; i++){	// DISPLAYING ARRAY
		cout << "  " << temp[i];
	}
	
 	return 0 ;
}

