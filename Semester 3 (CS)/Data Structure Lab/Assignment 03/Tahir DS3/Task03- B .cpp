#include<iostream>
#include<string>

using namespace std;

void ascending(int array[], int n, int size){
	if(n == size + 1)	// base condition
		return ;
		
	ascending(array, n + 1, size);// non tail
	
	int temp;
	for(int i = 0; i < n - 1; i++){
		if(array[i] > array[i + 1])
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
	}
}

void Display(int array[], int size){
	cout << endl << "Sorted array: " << endl;
	for(int i = 0; i < size; i++)
		cout << array[i] << "\t";
}

int main(){
	int size;
	
	cout << "Enter size of array: ";
	cin >> size;
	
	int array[size];
	
	cout << "Enter array elements: " << endl;
	
	for(int i = 0; i < size; i++)
		cin >> array[i];
	
	ascending(array, 0, size);	// calling function
	
	
	Display(array, size);
	
	return 0;
}
