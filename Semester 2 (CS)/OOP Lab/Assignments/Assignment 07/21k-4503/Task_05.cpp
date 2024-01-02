#include<iostream>
#include<string>
#include "cmath"

using namespace std;


class Square;
class Circle;

class ShapeDetails{
	private:
		double Area;
		double Parameter;
	public:
		ShapeDetails(){	}	// DEF . CONST.
		ShapeDetails(double A, double B){	// PARA . CONST.
			Area = A;
			Parameter = B;
		}
		
	// ShapeDetails Class is a friend of Square Class
	friend class Square;
	// ShapeDetails Class is a friend of Circle Class
	friend class Circle;
};

class Square{
	private:
		double Side_length;
	public:
		ShapeDetails S;
	
		Square(){	}		// DEF . CONST.
		Square(double A){	// PARA . CONST.
			Side_length = A;
		}
	// EXTRA FUNCTION
	double Calculate_Perimeter(){
		S.Parameter= Side_length * 4;
		return S.Parameter;
	}
	double Calculate_Area(){
		S.Area = (Side_length * Side_length);
		return S.Area;
	}
};

class Circle{
	private:
		double Radius_length;
	public:
		ShapeDetails S;
	
		Circle(){	}		// DEF . CONST.
		Circle(double R){	// PARA . CONST.
			Radius_length = R;
		}
	// EXTRA FUNCTION
	double Calculate_Perimeter(){
		S.Parameter = (2 * M_PI * Radius_length);
		return S.Parameter;
	}
	double Calculate_Area(){
		S.Area =  M_PI * (Radius_length * Radius_length);
		return S.Area;
	}
};

int main()
{
	ShapeDetails A(9,3), B(16,4);
	Square S(9);
	Circle C(8);
	
	cout << "\tSquare Area: " << S.Calculate_Area();
	cout << endl << "\tCircle Area: " << C.Calculate_Area();

 	return 0 ;
}

