#include<iostream>

using namespace std;
static int cnt = 0;

class Node{
	public:
		
		int data;
		Node* next;
		
		Node(){
			data = 0;
			next = NULL;
		}
		Node(int data){
			this -> data = data;
			next = NULL;
		}
};

class singlylinkedlist{
	public:
		Node* head;
		
		singlylinkedlist(){
			head = NULL;
		}		
		singlylinkedlist(Node *h){
			head = h;
		}
		
	void addnode(int n_data){
		Node* newNode = new Node();
		newNode->data = n_data;
		newNode->next = head;
		head = newNode;
	}

	void Printlist(){
		Node* temp = head;
		if (head == NULL){
			cout<<"List empty" << endl;
			return;
		}
		while (temp != NULL){
			cout<<"Data: " << temp->data << endl;
			temp = temp->next;
			cnt++;
		}
	}
		
	void removeduplicate(){
		
		Node* ptr1 = head;
		Node* temp, *ptr2;

		while (ptr1 != NULL){ 
			ptr2 = ptr1;
			
			while(ptr2->next != NULL){
				if(ptr1->data == ptr2->next->data){
					temp = ptr2->next;
					ptr2->next = ptr2->next->next;
					delete temp;
				}
				else				
					ptr2 = ptr2->next;
			}			
			ptr1 = ptr1->next;			
		}
	}	
};

int main(){
    singlylinkedlist mylist;
    
	mylist.addnode(20);
	mylist.addnode(30);
	mylist.addnode(40);
	mylist.addnode(20);
	mylist.addnode(50);
	
	cout<<"\nBefore deletion of Duplicate Data."<<endl;
	mylist.Printlist();
	
	mylist.removeduplicate();
	
	cout<<"\nAfter deletion of Duplicate Data."<<endl;
	mylist.Printlist();
	
	return 1;
}

