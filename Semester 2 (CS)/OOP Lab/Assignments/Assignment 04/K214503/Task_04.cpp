#include<iostream>
using namespace std;

class Date{
	private:
		int month;
		int day;
		int year;
	public:
		Date(int m, int d, int y){
			if(m>0 && m<=12)
				month = m;
			else 
				month = 1;
			if(d>0 && d<=31)
				day = d;
			year = y;
		}
	
	void SetMonth(int m){
		month = m;
	}
	void SetDay(int d){
		day = d;
	}
	void SetYear(int y){
		year = y;
	}
	
	int GetMonth(){
		return month;
	}
	int GetDay(){
		return day;
	}
	int GetYear(){
		return year;
	}
	//APPLYING GIVEN CONDITIONS
	void DisplayDate(){
		cout << endl << month << "/" << day << "/" << year << endl << endl;	
	}
};

int main(){
	cout << "Object # 01: " << endl;
	Date D1(12,15,2001); // USING SET FUNCTIONS TO UPDATE VALUES.
	D1.DisplayDate();
	
	cout << "Object # 02: " << endl;
	int d;
	Date D2(0,0,0);
	cout<<"Enter Day: ";
	cin>> d;
	D2.SetDay(d);
	cout<<"Enter Month: ";
	cin>> d;
	D2.SetMonth(d);
	cout<<"Enter Year: ";
	cin>> d;
	D2.SetYear(d);	
	D2.DisplayDate();
	
	return 0;
}

