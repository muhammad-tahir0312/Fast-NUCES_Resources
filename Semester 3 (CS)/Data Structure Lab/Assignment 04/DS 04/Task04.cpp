#include<iostream>
using namespace std;

class N{
	public:
	    int key; int data;
	    N* next;
	
	    N(){
	        next = NULL;
	    }
	    N(int k, int d, N* p=NULL){
	        key= k; data = d; next= p;
	    }
};

class L{
	public:
	    N* head;
	    N* tail;
	    
	    L(N* n){
	        head = n;
	    }
	    L(){
	        head = NULL;
	        tail = NULL;
	    }
	
	void Display(){
			N* temp = head;
	
			if(head == NULL){
				cout << "List empty" << endl;
				return;
			}
		
			while(temp != NULL){
				cout <<endl<< "Key: " << temp->key << " Data: " << temp->data << endl;
				temp = temp->next;
			}
		}
		
	void Add_at_I(N* ptr, int pos){
	        N* temp = head;
	        N* prev_ptr;
	        int count= 1;	// to store the size of linked list
	        for(;temp!=tail; count++,temp= temp->next){
	            if(count == pos-1){			// previous position
	                prev_ptr= temp->next;
	                temp->next= ptr;
	                ptr->next = prev_ptr;
	            }
	        }
	    }
};

int main(){

    L list;
    list.head= new N(10, 100);
    cout<<"Head Node"<<endl;
    //Display
    list.Display();
    
    cout<<"\n\nAdding new Node"<<endl;
    list.head->next = new N(20, 65);
    //Display
    list.Display();
    
    cout<<endl<<"\nAdding at Nth Position: "<<endl;
    N* obj = new N(30, 85); 
    list.Add_at_I(obj, 2);		// insert at position 2
    
    //Display
    list.Display();

    return 1;
}
