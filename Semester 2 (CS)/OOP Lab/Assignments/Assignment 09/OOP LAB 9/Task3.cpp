#include<iostream>
#include<string.h>

using namespace std;

class CarbonFootPrint{
	public:
		CarbonFootPrint(){		}
	
	virtual float GetCarbonFootPrint()=0;	// virtual fnc.

};

class Building : public CarbonFootPrint{
	private:
		float electricity;
		float gas;
		float oil;
	public:
		Building() : CarbonFootPrint(){	}
		Building(float a, float b, float c){
			electricity = a;
			gas = b;
			oil = c;
		}
		
		float GetCarbonFootPrint(){
			return ( GetElec() * 105 + GetGas() * 105 + GetOil() * 113 );
		}
	
	float GetElec(){
		return electricity;
	}
	
	float GetGas(){
		return gas;
	}
	
	float GetOil(){
		return oil;
	}
};

class Car : public CarbonFootPrint{
	private:
		int mileage;
	public:
		Car() : CarbonFootPrint(){	}
		Car(int m){
			mileage = m;
		}
		
		int GetMileage(){
			return mileage;
		}
		
		float GetCarbonFootPrint(){
			return GetMileage()*0.79;
		}
		
	
};

class Bicycle : public CarbonFootPrint{
	private:
		string color;
		
	public:
		Bicycle() : CarbonFootPrint(){	}
		Bicycle(string c){
			color = c;
		}
		
		float GetCarbonFootPrint(){
			cout << "\tNo energy used in bicycles!";
			return 0;
		}
		
	string GetColor(){
		return color;
	}
};

int main(){
	
	CarbonFootPrint* ptr[3];	// pointer
	
	Building B(75.5, 82.1, 54.2);
	Car c(1200);
	Bicycle bi("GREEN");
	
	
	ptr[0]=&B;
	ptr[1]=&c;
	ptr[2]=&bi;
	
	cout << "CLASS : Building " << endl;
	cout << "\tCarbon Foot Print for building: " << ptr[0]->GetCarbonFootPrint() << endl << endl;
	
	cout << "CLASS : Car " << endl;
	cout << "\tCarbon Foot Print for car: " << ptr[1]->GetCarbonFootPrint() << endl << endl;
	
	cout << "CLASS : Bicycle " << endl;
	cout << "\n\tCarbon Foot Print for bicycle: " << ptr[2]->GetCarbonFootPrint() << endl << endl;
	
	return 0;	
}
