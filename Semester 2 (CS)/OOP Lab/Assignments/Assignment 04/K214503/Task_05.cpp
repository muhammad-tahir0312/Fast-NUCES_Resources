#include<iostream>
#include<string>
using namespace std;

class HeartRates{
	private:
		string F_Name, L_Name;
		int Day, Month, Year;
	public:
		HeartRates(string F, string L, int D, int M, int Y){
			F_Name = F;
			L_Name = L;
			Day = D;
			Month = M;
			Year = Y;
		}
	// Set Functions
	void SetF_Name(){
		cout<<"First Name: ";
		cin >>	F_Name;
	}
	void SetL_Name(){
		cout<<"Last Name: ";
		cin>> L_Name ;
	}
	void SetDay(int D){
		cout<<"\nEnter day: ";
		cin>> Day;
	}
	void SetMonth(int M){
		cout<<"Enter month: ";
		cin>> Month;
	}
	void SetYear(int Y){
		cout<<"Enter year: ";
		cin>> Year;
	}
	// Get Functions
	string GetF_Name(){
		return F_Name;
	}
	string GetL_Name(){
		return L_Name;
	}
	int GetDay(){
		return Day;
	}
	int GetMonth(){
		return Month;
	}
	int GetYear(){
		return Year;
	}
	// Applying Given Conditions
	void GetAge(int& age){
			int cmonth, cday, cyear;
			
			cout<<"\nEnter current Day: ";
			cin>>cday;
			
			cout<<"Enter current Month: ";
			cin>>cmonth;
			
			cout<<"Enter Current year: ";
			cin>>cyear;
			
			age = cyear - Year;
		}
	int maxheartrate(int age){
			int heartrate;
			
			heartrate = 220 - age;
			
			return heartrate;
		}
	void targetheartrate(int hrate){
			int mintarget, maxtarget;
			
			mintarget = 0.50 * hrate;
			maxtarget = 0.85 * hrate;
			
			cout<<"\nYour targeted heart rate varries between "<<mintarget<<" bpm"<<" & "<<maxtarget<<" bpm";
		}
	
};

int main(){
	int age, hrate;
	
	HeartRates HR1("Muhammad","Tahir",15,12,2001);// USING CONSTRUCTOR VALUES
	cout << "Your First Name is " <<  HR1.GetF_Name() << " & Last Name is " <<  HR1.GetL_Name() << endl;

	HR1.GetAge(age);
	cout<<"Age: "<<age;
	hrate = HR1.maxheartrate(age);
	cout<<"\nYour Heart Rate: "<<hrate<<" bpm";
	HR1.targetheartrate(hrate);

	return 0;
}

