#include<iostream>
#include<string.h>

using namespace std;
 
int Max(int arr[], int n, int k){
    int counter=0, sum=0;
    
    for (int i=0; i<n-1; i++){
    	for (int j = 0; j<n-i-1; j++){
    		if (arr[j] > arr[j+1]){
    			int temp=arr[j+1];
    			arr[j]=temp;
    			arr[j+1]=arr[j];
			}                
		}           
	}
 
    for(int m=0; m < n; m++){
        if (sum + arr[m] <= k){
            sum = sum + arr[m];
            counter++;
        }
    }
    return counter;
}
 

int main(){
	int n=7;
    int k=50;
    int arr[]={1, 12, 5, 111, 200, 1000, 10};

    cout << "Output: " << Max(arr, n, k) << endl;
    
    return 1;
}
