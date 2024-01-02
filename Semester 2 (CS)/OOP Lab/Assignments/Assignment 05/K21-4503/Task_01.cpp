#include <iostream>

using namespace std;

class Complex{
	private:
		double RealPart;
		double ImgPart;
		const char i;
		
	public:
		Complex(double R=0, double Img=0):i('i'){
			RealPart = R;
			ImgPart = Img;
		}
	// SET FUNCTIONS
	void SetRealPart(){
		double R;
		cout << "Enter Real Part: " << endl;
		cin >> R;
		RealPart = R;
	}
	void SetImgPart(){
		double I;
		cout << "Enter Img Part: " << endl;
		cin >> I;
		ImgPart = I;
	}
	// GET FUNCTIONS
	double GetRealPart(){
		return RealPart;
	}
	double GetImgPart(){
		return ImgPart;
	}
	// EXTRA FUNCTIONS 
	void Display(){
		cout << "\tComplex number = (" << RealPart  << " , " <<  ImgPart << i << ")\n" << endl;
	}
	void Add(double R, double I){
		double x,y;
		x = RealPart + R;
		y = ImgPart + I;
		
		cout << "Addition : (" << x << " , " << y << i << ")\n" << endl;
	}
	void Sub(double R, double I){
		double x,y;
		x = RealPart - R;
		y = ImgPart - I;
		
		cout << "Subtraction : (" << x << " , " << y << i << ")\n" << endl;
	}	
}; // END OF CLASS

int main(){
	
	double x=0,y=0;
	
	Complex c1(5,10); // Obj# 01
	
	c1.Display();
	
	cout << "Enter Real & Img Part for Addition: " << endl;
	cin >> x >> y;
	c1.Add(x,y);
	
	cout << endl << endl;
	
	c1.Display();
	cout << "Enter Real & Img Part for Subtraction: " << endl;
	cin >> x >> y;
	
	c1.Sub(x,y);

	return 0;
}

