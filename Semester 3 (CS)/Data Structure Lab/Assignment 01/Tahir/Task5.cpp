#include<iostream>
using namespace std;

class Numbers{
	private:
		int *ptr ;		     // dma ptr
		int *ptr1 ;		// dma ptr
	public:
		Numbers(){	}
		Numbers(int p, int pp){
			ptr = new int;
			ptr1 = new int;
			
			*ptr  = p;
			*ptr1 = pp;
		}
		//copy constructor
		Numbers(const Numbers& p1){
		    	ptr = new int;
		    	ptr1 = new int;
		    	
		        *ptr = *p1.ptr;
		        *ptr1 = *p1.ptr1;
		    }
		//destructor
		~Numbers(){
			delete ptr;
			delete ptr1;
		}
    //ASSIGNMENT OVERLOADING
    void operator = (const Numbers &Obj){
            ptr = new int;
            ptr1 = new int;

            *ptr = *Obj.ptr;
            *ptr1 = *Obj.ptr1;
        }
    //changing values
    void change(int n1,int n2){
        *ptr = n1;
        *ptr1 = n2;
    }
    //DISPLAY FUNCTION
    void display(){
        cout<<"Num 1 = " << *ptr;
        cout<<"\nNum 2 = " << *ptr1 << endl << endl;
    }
};
int main(){
	
	Numbers A(10,5), B;
	
	cout<<"Before Changing: "<<endl<<endl;
	cout<<"A: "<<endl;
	A.display() ;
	
	B=A;	//COPYING OBJECTS
	cout<<"B: "<<endl;
	B.display() ;
	
	A.change(14,6);
	
	cout<<"After Changing: "<<endl<<endl;
	cout<<"A: "<<endl;
	A.display() ;
	cout<<"B: "<<endl;
	B.display() ;
		
	return 0;
}
