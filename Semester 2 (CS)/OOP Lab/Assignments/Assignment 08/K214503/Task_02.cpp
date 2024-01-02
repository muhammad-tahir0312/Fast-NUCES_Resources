#include <iostream>
#include <string>

using namespace std;

class Shape{
	double Len;
	double Wid;
	public:
		Shape(){	}
		Shape(double A, double W){
			Len = A;
			Wid = W;
		}
	// Area func
	double Area(){
		return Len * Wid;
	}
	// + operator overloading	
	double operator+(Shape& S){
		
		double ww, var1, var2;
		
		var1 = Area();
		var2 = S.Area();
		
		ww = var1 + var2 ;
		
		return ww;
	}	
};

int main(){
	
	double l,w;
	
	cout << "Enter Lenght of Obj#1: " << endl;
	cin >> l;
	cout << "Enter Width of Obj#1: " << endl;
	cin >> w;
	
	Shape S1(l,w);

	cout << "Enter Lenght of Obj#2: " << endl;
	cin >> l;
	cout << "Enter Width of Obj#2: " << endl;
	cin >> w;
	
	Shape S2(l,w);
	
	cout << "Area of Obj#1 = " << S1.Area() << endl;
	cout << "Area of Obj#2 = " << S2.Area() << endl;
	
	cout << "Sum = " << S1.Area() + S2.Area() << endl;
	
	return 0;
}

