#include<iostream>
#include<string>

using namespace std;

class Football{
    private:
	   	double  side;
    public:
   	 	Football(){}
	   	Football(double side){
	   	   this -> side = side;	
		}
	// SET FUNCTIONS
	void setside(double s){
		side = s;
	}
	// GET FUNCTION
	double getside(){
		return side;
	}
	// Extra Class Functions
	void calc_area(){
		
		double area = side*side;
		
		cout<<"\n\nThe area of Football ground is: \t"<<area;
	}
	
	friend class Cricket;	// Friend Class Declaration
	friend class Robotic;	// Friend Class Declaration
};

class Cricket{
	public:
		Cricket(){	}
		
	void calc_area(Football obj){
	    double area, length, width;
		   
        length = (obj.getside() * 2 ); //length is twice the side of football ground;		   
	    width = obj.getside(); //width is equal the	value of footbaall side;		   
	    area = length * width;
		   
	    cout<<"\nThe area of Cricket ground is: \t\t"<<area; 	
	}
};

class Robotic{
	public:
		Robotic(){	}
		
	void calc_area(Football obj){
			double radius = obj.getside(); //radius is equal to the given football side.		
			double area = ( (3.142) * (radius * radius) );
			
			cout<<"\nThe area of Robot playground is:\t"<<area;
		}
};

int main(){
	
  double s;
  
  cout<<"Enter Side: ";
  cin>>s;
  
  Football f(s);
  Cricket c;
  Robotic r;
  
  f.calc_area();
  c.calc_area(f);
  r.calc_area(f);

  	return 0;
}
