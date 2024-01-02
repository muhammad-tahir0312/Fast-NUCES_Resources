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
    
	void Add_at_Start(N* ptr){
        if (head == NULL){
            head = ptr;
            head->next= tail;
            tail->next= NULL;
        }
        else{
            N* temp= head;
            {
                head = ptr;
                ptr->next= temp;
                temp=temp->next;
            }
        }   
    }
};

int main(){
	
    L list;
    list.head= new N(1, 100);
    list.tail = list.head;
    
    cout<<"Previously: "<<endl;
    //Display
	list.Display();
    
    N* obj = new N(5, 65);
    N* obj1 = new N(10,88);
    
	cout<<"\n\nAfter Adding new Node at the start: "<<endl;
    list.Add_at_Start(obj);
    
    //Display
	list.Display();
	
	cout<<"\n\nAfter Adding new Node at the end: "<<endl;
    list.AddN(obj1);
    
    //Display
	list.Display();

    return 1;
}
