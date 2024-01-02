#include <iostream>
using namespace std;

class Animal{
	public:
		Animal(){	}
		
	virtual void animalSound(){
		cout << "\tD Animal makes a sound." << endl;
	}
};

class Cat : public Animal{
	public:
		Cat(){	}
		
	void animalSound(){
		cout << "\tD Cat says meow." << endl;
	}
};

class Dog : public Animal{
	public:
		Dog(){	}
		
	void animalSound(){
		cout << "\tD Dog says bow boww." << endl;
	}
};

class Duck : public Animal{
	public:
		Duck(){	}
		
	void animalSound(){
		cout << "\tD duck says quack quack." << endl;
	}
};

int main(){
	
	// UP CASTING
	cout << "Up Casting: " << endl<< endl;
	Animal Base;
	
	Cat *ptrDerived = (Cat *) &Base;
	
	ptrDerived->animalSound();
	
	// DOWN CASTING
	cout << "\nDown Casting: " << endl<< endl;
	Cat Derived1;
	Dog Derived2;
	Duck Derived3;
	
	Animal *ptrBase1 = &Derived1;
	Animal *ptrBase2 = &Derived2;
	Animal *ptrBase3 = &Derived3;
	
	ptrBase1->animalSound();
	ptrBase2->animalSound();
	ptrBase3->animalSound();

	return 0;
}
