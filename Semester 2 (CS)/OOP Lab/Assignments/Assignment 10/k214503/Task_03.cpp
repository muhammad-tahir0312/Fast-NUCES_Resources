#include <iostream>
using namespace std;

class Animal{
	private:
		string Name;
	public:
		Animal(){	}
		Animal(string N){
			Name = N;
		}
		
	void FoundIn(){
		cout << "An animal can be found in many places..." << endl;
	}
	
	void SetName(string N){
		Name = N;
	}
	
	string GetName(){
		return Name;
	}	
};

class Mammal : virtual public Animal{
	public:
		Mammal(){	}
		
	void FoundIn(){
		cout << "A mammal can be found in water or on land..." << endl;
	}
};

class MarineAnimal : virtual public Animal{
	public:
		MarineAnimal(){	}
	
	void FoundIn(){
		cout << "A marine animal can only be found in bodies of water..." << endl;
	}	
};

class Whales : public Mammal, public MarineAnimal{
	private:
		string whaleType;
	public:
		Whales(){	}
		Whales(string N, string B):Animal(N){
			whaleType = B;
		}

	void FoundIn(){
		cout << "A " << whaleType << GetName() << "can only be found in the ocean...." << endl;
	}	
};
int main(){
	
	Whales whaleBaleen("Baleen","Whale");
	
	whaleBaleen.FoundIn();
	
	
	
	return 0;
}
