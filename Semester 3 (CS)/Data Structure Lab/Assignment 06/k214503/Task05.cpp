#include<iostream>
using namespace std;

//const int n=7;
void merge(int arr[],int,int,int);

void printArray(int A[], int size){
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int SumofDigits(int a){
    int sum=0, remainder;
    while(a !=0){   
        remainder= a % 10;
        sum += remainder;
        a =  a / 10;
    }
    return sum;
}

void mergesort(int arr[], int first, int last){

    if(first >= last)
        return;
        
		int mid = (first + last) / 2;
		mergesort(arr, first, mid);
		mergesort(arr, mid+1, last);
		merge(arr,first,mid,last);
}

void merge(int arr[], int first, int mid, int last){
	
    int a1 = first, a2 = mid, a3 = mid+1, a4 = last, count = first;
    int temp[7];
    
    while (a1 <= a2 && a3 <= a4){
        if(SumofDigits(arr[a1]) < SumofDigits(arr[a3])){
            temp[count++] = arr[a1++];
        }
        else{
            temp[count++] = arr[a3++];

        }     
    }
    while (a1 <= a2){
        temp[count++] = arr[a1++];

    }
    while (a3 <= a4){
        temp[count++] = arr[a3++];
    }

    for (int i = first; i <= last; i++){
        arr[i] = temp[i];
    }
    
}

//void merge(int arr[],int first, int mid, int last){
//	int a1=first, a2=mid,a3=mid+1,a4=last, count=0;
//	int temp[7];
//	
//	while(a1 <= a2 && a3 <= a4){
//		if(SumofDigits(arr[a1]) < SumofDigits(arr[a3])){
//			temp[count++] = arr[a1++];
//		}
//		else{
//			temp[count++] = arr[a3++];
//		}
//	}
//	
//	while(a1 <= a2){
//		temp[count++] = arr[a1++];
//	}
//	while(a3 <= a4){
//		temp[count++] = arr[a3++];
//	}
//    for (int i = first; i <= last; i++){
//        arr[i] = temp[i];
//    }	
//}

int main(){
	int n=7;
	int arr[n] = {201,124,39,231,473,601,101};
	
	mergesort(arr,0,n-1);
	printArray(arr,n);
	
	return 1;
}

