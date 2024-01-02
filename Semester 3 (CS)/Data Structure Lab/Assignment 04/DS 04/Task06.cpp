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
	
	void update_at_I(N* ptr, int a){
		N* temp= head;	    		    	

			while(temp != NULL){				// checking if the key previously exits aur not
				if(a == temp->key){
					cout<<"\n\tKey "<<temp->key<<" Found."<<endl;
					temp->data = ptr->data;
					temp->key = ptr->key;
					break;
				}		
				temp = temp->next;
			}		
		}
};

int main(){
	
    L list;
    list.head = new N(1, 100);	// head

    N* obj = new N(5, 65);
    N* obj1 = new N(10,88);
    N* obj2 = new N(15,96);
    list.tail = obj2;	// tail
	list.AddN(obj);
    list.AddN(obj1);
    list.AddN(obj2);
    cout<<"Previously: "<<endl;
    //Display
	list.Display();
	
	N* temp = new N(99,9999);
	cout<<"\n\nAfter updating at Ith position: "<<endl;
    list.update_at_I(temp, 5);
    //Display
	list.Display();

    return 1;
}
