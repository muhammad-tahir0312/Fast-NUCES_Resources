#include<iostream>
#include<string>

using namespace std;

class Perimeter{
    private:
	   	double length;
		double breadth;
   	public:
   		Perimeter() {}
   		Perimeter(double length, double breadth)   		{
   			this -> length = length;
   			this -> breadth = breadth;
		}
	// SET FUNCTIONS
	void setlength(double l){
			length = l;
		}
	void setbeadth(double b){
			breadth = b;
		}
	// GET FUNCTIONS		
	double getlength(){
			return length;
		}
	double getbreadth(){
			return breadth;
		}
	// Extra Class Functions
	double cal_perimeter()
		{
			double perimeter;
			
			perimeter = (2 * (length + breadth));
			
			return perimeter;
		}
		
	friend class PrintClass;		// Friend Class Declaration
};

class PrintClass{
	public:		
		void display(Perimeter obj)
		{	
			cout<<"\nThe value of perimeter is: " << obj.cal_perimeter();
		}
};

int main(){
   
  Perimeter  obj1(0,0);
  PrintClass obj2;
  	
  	double l,b;
  	
  	cout<<"Enter the value of length: ";
	cin>>l;
	cout<<"\nEnter the value of breadth: ";
	cin>>b;	
	
  obj1.setlength(l);
  obj1.setbeadth(b);
  
  obj2.display(obj1);

  return 0;
}
