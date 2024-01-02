#include<iostream>
using namespace std;

class N{
	public:
	int key;
	N *next;
	
	N(){	}
	N(int d, N *a=NULL){
		key = d;
		next = a;
	}
};

class SLL{
	public:
	N *head;
	
	SLL(N *a){
		head = a;
	}
	
void AddNode_at_End(int key)
{
    if(head == NULL)
    {
        N* newNode = new N(key);
        head =  newNode;
        newNode->next=NULL;
    }
    else
    {
        N* temp= head;
        if(checkNode(key))
        {
            N* newNode = new N(key);
            while(temp->next !=NULL)
            {
                temp= temp->next;
            }
            temp->next=newNode;
            newNode->next= NULL;
        }
        else
        {
        	cout<<"\nEnter a Valid Key: ";
        	cin>>key;
        	if(checkNode(key))
        	{
            N* newNode = new N(key);
            while(temp->next !=NULL)
            {
                if(newNode->key == temp->key || newNode->key == temp->next->key)
				{
					newNode->key += 1;
					continue;
				}
                temp= temp->next;
            }
            temp->next=newNode;
            newNode->next= NULL;        		
			}
		}
    }
}
	
	bool checkNode(int k)
	{
	    N* temp = head;
	    while (temp != NULL)
	    {
	        if(temp->key == k)
	        {
	            return false;
	        }
	        temp= temp->next;
	    }
		return true;
	}
	void print(){
		N *temp = head;
		cout<<"Elements: ";
		while(temp != NULL){	
			cout<< temp->key<<endl;			
			temp = temp->next;	
		}
	}
	
	bool checkLoop(void)
{
    N* fastPtr = head;
    N* slowPtr = head;

    while(fastPtr->next->next!= NULL && fastPtr->next !=NULL)
    {
        slowPtr= slowPtr->next;
        fastPtr=fastPtr->next->next;
        if(slowPtr == fastPtr)
        {
            return true;
        }
    }
    return false;
}

};

int main(){
	
	N* p = new N(1);
	SLL* o= new SLL(p);
	
	o->AddNode_at_End(2);
	o->AddNode_at_End(3);
	o->AddNode_at_End(4);
	o->AddNode_at_End(5);
	o->AddNode_at_End(6);
	o->AddNode_at_End(7);
	o->AddNode_at_End(8);
	o->print();
    if (o->checkLoop())
    {
        cout<<"\nLoop Exists";
    }
    else
    {
        cout<<"\nLoop Doesnot Exists";
    }
    
	return 1;
}

