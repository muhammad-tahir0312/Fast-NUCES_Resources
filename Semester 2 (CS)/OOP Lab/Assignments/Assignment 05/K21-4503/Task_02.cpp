#include <iostream>
#include <bits/stdc++.h>	// For using "__GCD()" function

using namespace std;

class Rational
{
	private:
	int numerator;
	int denominator;
	
	public:
	Rational(int numerator, int denominator){ 	// PARAMETRIZE CONSTRUCTOR
		this->numerator = numerator;
		this->denominator = denominator;
	}
	// SET FUNCTIONS
	void setrational(int numerator, int denominator){
		this->numerator = numerator;
		this->denominator = denominator;
	}
	
	// SOLVING GIVEN CONDITIONS
	void reduceFraction(int x, int y){
	    int d;
	    
	    d = __gcd(x, y); // Using "__GCD()" function 
	 
	    x /= d;
	    y /= d;
	    
	    denominator = y;
	    numerator = x;
	    
	    printrational(numerator, denominator);
	    printfloating(numerator, denominator);
	}

	void add(Rational r1, Rational r2){ // FUNCTION FOR CONDITION "A"
		int num = (r2.denominator*r1.numerator) + (r1.denominator*r2.numerator);
		int den = r1.denominator*r2.denominator;
		reduceFraction(num, den);
	}

	void sub(Rational r1, Rational r2){ // FUNCTION FOR CONDITION "B"
		int num = (r2.denominator*r1.numerator) - (r1.denominator*r2.numerator);
		int den = r1.denominator*r2.denominator;
		reduceFraction(num, den);
	}

	void multiply(Rational r1, Rational r2){ // FUNCTION FOR CONDITION "C"
		int num = (r1.numerator*r2.numerator);
		int den = (r1.denominator*r2.denominator);
		reduceFraction(num, den);
	}

	void divide(Rational r1, Rational r2){ // FUNCTION FOR CONDITION "D"
		int num = r1.numerator*r2.denominator;
		int den = r1.denominator*r2.numerator;
		
		reduceFraction(num, den);
	}

	void printrational(int num, int denom){ // FUNCTION FOR CONDITION "E"
		cout << "\t\tNumerator: " << num << "  Denominator: " << denom<<endl; 
	}

	void printfloating(int num, int denom){ // FUNCTION FOR CONDITION "F"
		float ans;
		float a = num;
		float b = denom;
		ans= a / b;
		cout << "\t\t\t Answer: " << ans << endl; 
	}	
}; // END OF CLASS

int main()
{
	int n1, n2, d1, d2;
	
	Rational R1(2,4), R2(3,6), R3(0,0); // CREATING OBJECTS
	
	cout << "Enter Numerator of 1st Fraction: " << endl; 
	cin >> n1;
	
	cout << "Enter Denominator of 1st Fraction: " << endl; 
	cin >> d1;
	
	cout << "Enter Numerator of 2nd Fraction: " << endl; 
	cin >> n2;
	
	cout << "Enter Denominator of 2nd Fraction: " << endl; 
	cin >> d2;
	
	R1.setrational(n1,d1);
	R2.setrational(n2,d2);

	char choice;
	
	cout << endl << "1. Addition" << endl;
	cout << endl << "2. Subtraction" << endl;
	cout << endl << "3. Multiplication" << endl;
	cout << endl << "4. Division" << endl;
	cout << endl << "Enter choice: ";
	cin >> choice;
	
	if(choice == '1')
		R3.add(R1,R2);
		
	else if(choice == '2')
		R3.sub(R1,R2);
		
	else if(choice == '3')
		R3.multiply(R1,R2);
		
	else if(choice == '4')
		R3.divide(R1,R2);
	else{
		cout << "\n\tInvalid Input!" ;
		exit(0);
	}		 
	
	return 0;	
}
