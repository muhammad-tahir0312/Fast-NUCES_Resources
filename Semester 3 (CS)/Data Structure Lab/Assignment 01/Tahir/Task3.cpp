#include<iostream>
using namespace std;

void MinMax(int *ptr1, int *ptr2, int n){
	
	int min=*ptr1, temp;
	int max=*ptr2;

	for(int i=0; i<n; i++){
		if(min >= *ptr1){
			temp = min;
			min = *ptr1;
			*ptr1 = temp;
		}
		if( max <= *ptr2){
			temp = max;
			max = *ptr2;
			*ptr2 = temp;		
		}
		ptr1++;
		ptr2++;
	}
	cout << "Min: "<< min << "\nMax: " << max;	
}

int main(){
	
	int arr[4]={69,0,911,1556};
	int *ptr1 = &arr[0];	// min
	int *ptr2 = &arr[0];	// max
	
	MinMax(ptr1,ptr2, 4);	
	
	return 0;
}
