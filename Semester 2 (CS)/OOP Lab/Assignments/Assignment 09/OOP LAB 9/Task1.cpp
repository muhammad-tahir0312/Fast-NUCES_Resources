#include<iostream>
#include<string.h>

using namespace std;

class Animal{
	public:
		Animal(){	}
	
	virtual void Move()=0;	// virtual fnc.
};

class Gorilla : public Animal{
	public:
		Gorilla(){	}	
	
	void Move(){
			cout << "Gorilla Moves Fast..." << endl;
		}
};

class Cheetah : public Animal{	
	public:
		Cheetah(){	}	
		
	void Move(){
			cout << "Cheetah Moves Faster..." << endl;
		}	
};

int main(){
	
	Gorilla G;
	Cheetah C;
	
	G.Move();
	C.Move();
}
