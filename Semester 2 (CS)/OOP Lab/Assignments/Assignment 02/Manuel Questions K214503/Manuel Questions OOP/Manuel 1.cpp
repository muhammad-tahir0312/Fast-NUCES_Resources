//How to use predefined functions.
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main ()
{
	int x;
	double u, v;
		u = 4.2; //Line 1
		v = 3.0; //Line 2
	cout << "Line 3: " << u << " to the power of " << v << " = " << pow (u, v) << endl; //Line 3
	cout << "Line 4: 5.0 to the power of 4 = " << pow (5.0, 4) << endl; //Line 4
		u = u + pow (3.0, 3); //Line 5
	cout << "Line 6: u = " << u << endl; //Line 6
		x = -15; //Line 7
	cout << "Line 8: Absolute value of " << x << " = " << abs(x) << endl; //Line 8
	
	return 0;
}
