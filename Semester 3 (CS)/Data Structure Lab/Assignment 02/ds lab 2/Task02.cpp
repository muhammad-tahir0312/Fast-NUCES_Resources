#include<iostream>
using namespace std;

void input(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Enter element: " << i+1 << endl;
		cin>>a[i];
	}
}

void display(int *a, int n){
	for(int i=0; i<n; i++){
		cout<< *(a+i) << endl;
	}
}

void sort_a(int* list, const size_t &len){
    for(size_t i = 0; i < len; ++i){
        for (size_t j = i+1; j < len; ++j){
            if (list[i] > list[j]){
                swap(list[i], list[j]);
            }
        }
    }
}
void sort_d(int* list, const size_t &len){
    for(size_t i = 0; i < len; ++i){
        for (size_t j = i+1; j < len; ++j){
            if (list[i] < list[j]){
                swap(list[i], list[j]);
            }
        }
    }
}

int main(){
	
	int size = 10;
	int arr1[size];
	int *ptr[size];
	
	input(arr1, size);	// input func
	
	for(int i=0; i<size; i++){	// copying elements in ptr array
		ptr[i] = &arr1[i];
	}
	
	cout<<"Assending: "<<endl;
	sort_a(*ptr,size);	// sorting in assending
	display(*ptr, size);	// display func
	
	cout<<"Dessending: "<<endl;
	sort_d(*ptr,size);	// sorting in dessending	
	display(*ptr, size);	// display func
	
	return 0;
}
