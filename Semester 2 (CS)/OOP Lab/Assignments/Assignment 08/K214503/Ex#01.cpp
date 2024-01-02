// C++ program to demonstrate the working of friend function
#include <iostream>
using namespace std;

class Distance {
	private:
	int meter;
// friend function
	friend int addFive(Distance);
	public:
	Distance(){
		meter = 0;
	}
};
// friend function definition
int addFive(Distance d) {
	//accessing private members from the friend function
	d.meter += 5;
	
	return d.meter;
}

int main() {
	Distance D;
	cout << "Distance: " << addFive(D);
return 0; 
}
