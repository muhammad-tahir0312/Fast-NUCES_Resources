#include <iostream>
#include <string>

using namespace std;

class A{
	private:
		int B;
	public:
		A(){	}
		A(int a){
			B = a;
		}
	// SET FUNCTION
	void SetA(int a){
		B =a;
	}
	// GET FUNCTION
	int GetA(){
		return B;
	}
	
	// post fix
	A operator--(int){
		A c(B);	// saving old value
		
		B /= 4;
		
		return c;	// returning old value		
	}
	// pre fix
	void operator--(){
		B *= 4;
	}
	
};

int main(){
	
	A A1(8);
	
	cout << "Initial Value: " << A1.GetA() <<endl  << endl;
		
	--A1;
	cout << "A1 (Pre): " << A1.GetA() << endl;
	
	A1--;
	cout << "A1 (Post): " << A1.GetA() << endl;

	return 0;
}

