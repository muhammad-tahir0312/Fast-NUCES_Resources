#include<iostream>
using namespace std;

class N{
	public:
		int key;
		int data;
		N *next;
	
	N(){
		next = NULL;
	}
	N(int A,int D, N *p = NULL){
		key = A;
		data = D;
		next = p;
	}
};

class L{
	public:
		N *Head;
	L(){
		Head = NULL;
	}
	L(N *ptr){
		Head = ptr;
	}
};

int main(){
	
	L List;
	
	List.Head = new N(4503,21);
	
	cout<<"Key: "<<List.Head->key;
	cout<<"\nData: "<<List.Head->data;
	cout<<"\nNext: "<<List.Head->next;

	return 0;
}

