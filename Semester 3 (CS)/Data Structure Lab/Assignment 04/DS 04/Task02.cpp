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
				if(ptr->key == temp->key){
					cout<<"Exiting Program, Run again and enter another key!!";
					exit(0);
				}		
				temp = temp->next;
			}
			temp = head;
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
};

int main(){

    L list;
    list.head = new N(2, 100);	// setting head
    list.head->next = new N(2,55);	// only TWO ELEMENT till here
    
    list.tail = list.head->next;	// setting tail
    
    cout<<"Adding new Node"<<endl;
    N* obj = new N(5, 75);

    list.AddN(obj);	// calling "Add Node" func

    //Display
	list.Display();

    return 1;
}


