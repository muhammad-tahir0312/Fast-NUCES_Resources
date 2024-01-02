#include <iostream>
#include <string>

using namespace std;

class Animal{
	public:
		Animal(){ }	// def. const.
		
	void Animal_Sound(){
		  cout << "The Animal makes a sound." << endl;
	}
};

class Cat : public Animal{
	public:
		Cat(){	} // def. const.
		
	void Animal_Sound(){
		cout << "The Cat says MEOW." << endl;
	}
};

class Dog : public Animal{
	public:
		Dog(){	} // def. const.
		
	void Animal_Sound(){
		cout << "The Dog says BOW BOW." << endl;
	}
};

class Duck : public Animal{
	public:
		Duck(){	} // def. const.
		
	void Animal_Sound(){
		cout << "The Duck says QUACK QUACK." << endl;
	}
};


int main()
{
	Animal A;
	Cat A1;
	Dog A2;
	Duck A3;
	
	A.Animal_Sound();
	A1.Animal_Sound();
	A2.Animal_Sound();
	A3.Animal_Sound();
	
 	return 0;
}

