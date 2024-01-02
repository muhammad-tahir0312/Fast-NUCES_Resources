#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

template <class X> class Calculator
{
	private:
		X num1;
		X num2;
	
	public:
		Calculator(){	}
		Calculator (X n1, X n2)
		{
			num1 = n1;
			num2 = n2;
		}
		
	X Add(){
		return num1 + num2;
	}	
	X Subs(){
		return num1 - num2;
	}
	X multiply(){
		return num1 * num2;
	}	
	void ShowData(){
		cout << "\tAdditions of "<< num1 <<" & "<< num2 << " = " << Add();
		cout << "\n\tSubtraction of "<< num1 <<" & "<< num2 << " = "  << Subs();
		cout << "\n\tMultiplication of "<< num1 <<" & "<< num2 << " = "  << multiply() << endl << endl;
	}
};

int main(){
	
	Calculator<int> I(10,5);
	Calculator<float> F(10.2,5.3);
	
	cout << "Int: \n";
	I.ShowData();
	
	cout << "\nFloat: \n";
	F.ShowData();	
	
	return 0;	
}
