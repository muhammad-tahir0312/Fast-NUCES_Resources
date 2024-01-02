#include <iostream>		
#include <string>

using namespace std;		
						// DEFAULT CONSTRUCTOR IS NOT WORKING 
class Car{
	private:
		int Engine;
		int Wheels;
		int Doors;
	public:
	//	Car(){	}	// def. const.
		Car(int E=660, int w=4, int D=2){	// para. const.
			Engine = E;
			Wheels = w;
			Doors = D;
		}
	// Get Func.
	int GetEngine(){
		return Engine;
	}
	int GetWheels(){
		return Wheels;
	}
	int GetDoors(){
		return Doors;
	}
	// EXTRA FUNC.
	void Start_Engine(){
		cout << "Engine has started." << endl;
	}
	void Accelerator(){
		cout << "The Car is accelerating." << endl;
	}
	void Brake(){
		cout << "Brakes" << endl;
	}
};

class Batmobile : public Car{
	public:
	//	Batmobile(){}	// def. const.
		Batmobile(int E, int w, int D):Car(E, w, D){	}


};

class Mustang  : public Car{
	public:
	//	Mustang(){}	
		Mustang(int E, int w, int D):Car(E, w, D){	}
};

class Falcon : public Car{
	public:
	//	Falcon(){	}	// def. const.
		Falcon(int E, int w, int D):Car(E, w, D){	}
		
};


int main()
{
	Car C(660,4,2);
	Batmobile B(1100,4,2);
	Mustang M(960,4,4);
	Falcon F(860,4,2);
	
	cout << "Base Class: " << endl;
	cout << "\tEngine: " << C.GetEngine() << endl;
	cout << "\tWheels: " << C.GetWheels() << endl;
	cout << "\tDoors: " << C.GetDoors() << endl;
	
	cout << endl;
	
	cout << "Batmobile: " << endl;
	cout << "\tEngine: " << B.GetEngine() << endl;
	cout << "\tWheels: " << B.GetWheels() << endl;
	cout << "\tDoors: " << B.GetDoors() << endl;
	
	cout << endl;
	
	cout << "Mustang: " << endl;
	cout << "\tEngine: " << M.GetEngine() << endl;
	cout << "\tWheels: " << M.GetWheels() << endl;
	cout << "\tDoors: " << M.GetDoors() << endl;
	
	cout << endl;
	
	cout << "Falcon: " << endl;
	cout << "\tEngine: " << F.GetEngine() << endl;
	cout << "\tWheels: " << F.GetWheels() << endl;
	cout << "\tDoors: " << F.GetDoors() << endl;
	
 	return 0;
}

