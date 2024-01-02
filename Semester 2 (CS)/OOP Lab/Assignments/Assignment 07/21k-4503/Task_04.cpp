#include<iostream>
#include<string>

using namespace std;

class School{
	public:
		School(){	}	// DEF. CONST.
	//FUNCTIONS
	int Mul(int A, int B){
		return A * B;
	}
	int Mul(int A, int B, int C){
		return A * B * C;
	}
	int Mul(double A, double B){
		return A * B;
	}
	int Mul(double A, double B, double C){
		return A * B * C;
	}

};

int main(){

	School S;
	
	cout << " 5 * 5 = " << S.Mul(5,5) << endl << endl;;
	cout << " 5 * 5 * 5 = " << S.Mul(5,5,5) << endl << endl;;
	cout << " 2.2 * 4.5 = " << S.Mul(2.2,4.5) << endl << endl;;
	cout << " 5.5 * 6.2 * 3.3 = " << S.Mul(5.5,6.2,3.3) << endl << endl;;
	
 	return 0 ;
}

