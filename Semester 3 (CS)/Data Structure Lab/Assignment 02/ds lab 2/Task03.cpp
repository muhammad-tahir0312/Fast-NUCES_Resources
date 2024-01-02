#include<iostream>
using namespace std;
 
void sort(int array[],int size){
    int temp[size];
    int min=0, max=size-1, flag = 1; 
    
    for(int i=0; i < size; i++){
        if(flag){
        	temp[i] = array[max--];
		}          
        else{
        	temp[i] = array[min++];
		}
        flag = !flag;	// toggling flag ( one at first and then zero )
    }
 
    for(int i=0; i < size; i++){
     	array[i] = temp[i];
	}
       
}

void Display(int arr[], int size){
	for (int i=0; i < size; i++){
    	cout << arr[i] << " ";	
	}
}
 
int main(){
	
	int size=7;
    int arr[size]={1, 2, 3, 4, 5, 6, 7}; 
    
	cout << "Initial Array: ";	
	Display(arr,size);
	
	sort(arr,size); 
 
    cout <<endl<<endl<< "Final Array: ";
	Display(arr,size);     

    return 0; 
}
