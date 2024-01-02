#include<iostream>
using namespace std;

bool sort(int *ptr, int size){
	int temp=0;
	if(size==0){
		return true;
	}
	for(int i=0; i<size-1; i++){
		if(ptr[i]> ptr[i+1]){
			temp = ptr[i];
			ptr[i]=ptr[i+1];
			ptr[i+1]=temp;
		}
	}
	sort(ptr,size-1);
}

void Display(int *ptr, int size){
	for(int i=0; i<size; i++){
		cout<<" "<<*(ptr+i)<<endl;
	}
}

int main(){
	
	int size=5;
	int Array[size]={1,0,2,5,4};

	sort(Array,size);
	
	Display(Array,size);
	
	return 0;
}

