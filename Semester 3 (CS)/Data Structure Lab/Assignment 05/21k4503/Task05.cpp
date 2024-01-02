#include<iostream>
#include<string.h>

using namespace std;
  
void Arr(int arr[], int n){

	int start=0; //left to right
	int end=n-1; // right to left 
	int max, min; 
  
	for(start=0; start<n-1; start++){
    	if (arr[start] > arr[start+1])	
   			break;
	}

	if (start==n-1){
    	cout << "The complete array is sorted" << endl;
    		return;
	}
  

	for(end=n-1; end>0; end--){
    	if(arr[end] < arr[end-1])
    		break;
	}
  
	max=arr[start]; 
	min=arr[start];
	
	for(int i=start+1; i<=end; i++){
   		 if(arr[i] > max){
    		max = arr[i];	
		 }
    
   		if(arr[i] < min){
    		min = arr[i];
		}   
	}
  

	for(int i=0; i<start; i++){
    	if(arr[i] > min){ 
   			start = i;
    	 	break;
    	}     
	} 
  

	for(int i=n-1; i>=end+1; i--){
    	if(arr[i] < max){
   			end = i;
    		break;
   		} 
	} 
      
	cout << "\nThe unsorted sub-array indices that make the array sorted are:  " << start << " and " << end << endl;

	return;
}
  
int main(){
	
    int arr[]={0, 1, 15, 25, 6, 7, 30, 40, 50};
    int size=9;
    
    Arr(arr, size);
    
    return 1;
}
