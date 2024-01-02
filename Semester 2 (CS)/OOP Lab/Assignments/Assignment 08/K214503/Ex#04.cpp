#include <iostream>
using namespace std;

class TestClass {
	private:
		int count;
	public:
	TestClass()	{
		count=5;
	}
	void operator --() {
	count = count - 3;
	}
	void Display() {
	cout << "Count: " << count; 
	}
};

int main() {
	TestClass tc;
	--tc;
	tc.Display();
	
	return 0;
}
