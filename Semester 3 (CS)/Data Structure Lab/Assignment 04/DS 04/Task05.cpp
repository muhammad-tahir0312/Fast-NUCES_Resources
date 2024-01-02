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
	
	void delete_at_end(){
		if(head == tail){
			delete head;
			delete tail;
			
			head = tail = NULL;
		}
		else{
			N* temp= head;
			N* t;
			int count = 1;
			
			while(temp->next->next != NULL)
        		temp = temp->next;
			
			t = temp->next;
			temp->next = NULL;
			
			delete t;			
			}		
		}
	
	void delete_at_I(int a){
		N* temp= head;
		N* t1;
		int count = 1, pos=1;	    		    	

			while(temp != NULL){				// checking if the key previously exits aur not
				if(a == temp->key){
					cout<<"\n\tKey "<<temp->key<<" Found, Now deleting it."<<endl;
					break;
				}		
				pos++;
				temp = temp->next;
			}
			temp = head;

			for(;temp!=NULL; count++,temp= temp->next){
				if(count == pos){
					t1 = temp->next;	// address of the next
				}
			}
			temp = head;
			count = 1;
			for(;temp!=NULL; count++,temp= temp->next){
				if(count == pos-1){		// assigning in previous pos
					temp->next = t1;	
				}
			}		
			delete temp;			
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

    
	cout<<"\n\nAfter deleting Nth position: "<<endl;
    list.delete_at_I(10);
    //Display
	list.Display();
	
	cout<<"\n\nAfter deleting END position: "<<endl;
    list.delete_at_end();
    //Display
	list.Display();

    return 1;
}
