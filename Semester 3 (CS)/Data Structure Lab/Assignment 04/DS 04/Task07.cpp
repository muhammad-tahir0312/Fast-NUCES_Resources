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
	
	void AddN(N* ptr){
	    	N* temp= head;

			while(temp != NULL){				// checking if the key previously exits aur not
				if(head == NULL){
		                head = ptr;
		                tail = ptr; 
		        }	
				tail->next = ptr;
				tail = ptr;
				tail->next = NULL;		
				if(temp->next == NULL){
		                temp->next = ptr;
		                tail = ptr;
		                tail->next=NULL;
		        }
				temp = temp->next;
			}
		}
	
	void modify(){
		N* temp= head;	
		int count=0, x;    		    	

			while(temp != NULL){				// size of linked list
					count++;
				temp = temp->next;
			}		
			
			// BUBBLE SORTING
			for(int i=0; i<count; i++){		// outer loop
				temp = head;
				for(int j=0; temp->next!=NULL; j++){	// inner loop
					if(temp->data % 2 == 1 && temp->next->data % 2 == 0){
						x = temp->next->data;
						temp->next->data = temp->data;		// swapping
						temp->data = x;
					}
					temp = temp->next;
				}			
			}
		}
};

int main(){
	
    L list;
    list.head = new N(1, 75);	// head

    N* obj = new N(5, 65);
    N* obj1 = new N(10,88);
    N* obj2 = new N(15,96);
    N* obj3 = new N(20,100);
    
    list.tail = obj3;	// tail
    
	list.AddN(obj);
    list.AddN(obj1);
    list.AddN(obj2);
    list.AddN(obj3);
    cout<<"Previously: "<<endl;
    //Display
	list.Display();
	
	cout<<"\n\nAfter Modifying: "<<endl;
    list.modify();
    //Display
	list.Display();

    return 1;
}
