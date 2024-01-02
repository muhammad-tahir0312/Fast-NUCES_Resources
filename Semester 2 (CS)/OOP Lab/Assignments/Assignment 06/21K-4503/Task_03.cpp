 #include<iostream>
 #include<string>
 
 using namespace std;
 
 class Vehicles{
 		private:
 			double Price;
 		public:
 			Vehicles() {	 }	// default const.
 			Vehicles(double P){
 				SetPrice(P);
			 }
		// set func.
		void SetPrice(double P){
			Price = P;	
		}
		// get func.
		double GetPrice(){
			return Price;
		}
 };
 
 
  class Car : public Vehicles {
  		private:
  			int seating_capacity;
  			int doors;
  			string fuel_type;
  		public:
 			Car() {	 }		// default const.
 			Car(int a, int b, string c, double d):Vehicles(d){	// para. const.
				SetSeating_capacity(a);
				SetDoors(b);
				SetFuel_type(c);
			}		
 		// set func.
 		void SetSeating_capacity(int a){
 			seating_capacity = a;
		}
  		void SetDoors(int a){
 			doors = a;
		}
 		void SetFuel_type(string a){
 			fuel_type = a;
		}	
		// get func.
		int GetSeating_capacity(){
 			return seating_capacity;
		}
  		int GetDoors(){
 			return doors;
		}
 		string GetFuel_type(){
 			return fuel_type;
		}
 };
 
 
   class Motorcycle : public Vehicles {
 		private:
 			int number_of_cylinders;
 			int number_of_gears;
 			int number_of_wheels;
 	  	public:
 			Motorcycle() {	 }		// default const.
 			Motorcycle(int q, int b, int c, double d):Vehicles(d)  {	// para. const.
				SetNumber_of_cylinders(q);
				SetNumber_of_gears(b);
				SetNumber_of_wheels(c);
			}
		// set functions
		void SetNumber_of_cylinders(int a){
			number_of_cylinders = a;
		}
		void SetNumber_of_gears(int a){
			number_of_gears = a;
		}
		void SetNumber_of_wheels(int a){
			number_of_wheels = a;
		}
		// get func.
		int GetNumber_of_cylinders(){
			return number_of_cylinders;
		}
		int GetNumber_of_gears(){
			return 	number_of_gears;
		}
		int GetNumber_of_wheels(){
			return number_of_wheels;
		}		
 };
 
 
 class Audi_of_Car : public Car{
 	private:
 		string Model_Type;
 	public:
 		Audi_of_Car(){		 } 		// default cnst.
 		Audi_of_Car(int a, int b, string c, double e, string f):Car(a,b,c,e){ 	// para. const.
 			Model_Type = f;
		 }	
		// Set func.
		void SetModel_Type(string a){
			Model_Type = a;
		}	
		// Get func.
		string GetModel_Type(){
			return Model_Type;
		}
 };
 
  class Yamaha_of_Motorcycle : public Motorcycle{
 	private:
 		string Model_Type;
 	public:
 		Yamaha_of_Motorcycle(){		 } 		// default cnst.
 		Yamaha_of_Motorcycle(int a, int b, int c, double d, string e):Motorcycle(a,b,c,d){ 	// para. const.
 			Model_Type = e;
		}
		// Set func.
		void SetModel_Type(string a){
			Model_Type = a;
		}	
		// Get func.
		string GetModel_Type(){
			return Model_Type;
		}
 };
 
int main(){
	
	cout << "Description Of Car: " << endl;
	
	Audi_of_Car A(5,4,"High",45678.76,"S");	// OBJECT # 01
	cout << "\n\tNumber of Doors: " << A.GetDoors() << "\n\tFuel: " << A.GetFuel_type() << "\n\tseating Capacity: " << A.GetSeating_capacity() << "\n\tPrice: " << A.GetPrice() << "\n\tType: " << A.GetModel_Type() << endl;

	cout << endl << "Description Of Motorcycle: " << endl;	
	
	Yamaha_of_Motorcycle Y(2,5,2,9999,"R");// OBJECT # 02
	cout << "\n\tNumber of Cylinders: " << Y.GetNumber_of_cylinders() << "\n\tNumber of Gears: " << Y.GetNumber_of_gears() << "\n\tNumber of Wheels: "<< Y.GetNumber_of_wheels() << "\n\tPrice: " << Y.GetPrice() << "\n\tType: " << Y.GetModel_Type() << endl;


	return 0;
}

