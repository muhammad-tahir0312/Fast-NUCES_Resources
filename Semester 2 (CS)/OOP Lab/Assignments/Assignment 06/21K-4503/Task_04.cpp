#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student{
	private:
		int Id;
		string Name;
	public:	
		Student(){	}	// default const.
		Student(int a, string b){		// para. const.
			Id = a;
			Name = b;
		}
	// set func.
	void SetId(int a){
		Id = a;
	}
	void SetName(string b){
		Name = b;
	}
	// Get func.
	int GetId(){
		return Id;
	}
	string GetName(){
		return Name;
	}
	void GetStudentDetails(){
		cout << "\n\tStudent Name: " << Name << "\n\tID: " << Id << endl;
	}
};

class Marks : public Student{
	protected:
		int OOP_Marks;
		int PF_Marks;
		int DS_Marks;
		int DB_Marks;
	public:
		Marks(){	}	// default const.
		Marks(int a, int b, int c, int d, int e, string f) : Student(e,f) {	// para const.
			SetOOP_Marks(a);
			SetPF_Marks(b);
			SetDS_Marks(c);
			SetDB_Marks(d);		
		}
	// set func.
	void SetOOP_Marks(int a){
		OOP_Marks = a;
	}
	void SetPF_Marks(int b){
		PF_Marks = b;
	}
	void SetDS_Marks(int c){
		DS_Marks = c;
	}
	void SetDB_Marks(int d){
		DB_Marks = d;
	}
	// Get func.
	int GetOOP_Marks(){
		return OOP_Marks;
	}
	int GetPF_Marks(){
		return PF_Marks;
	}
	int GetDS_Marks(){
		return DS_Marks;
	}
	int GetDB_Marks(){
		return DB_Marks;
	}
	
	void GetMarks(){
		cout << "\n\tOOP_Marks: " << GetOOP_Marks() << "\n\tPF_Marks: " << GetPF_Marks() << "\n\tDS_Marks: " << GetDS_Marks() << "\n\tDB_Marks: " << GetDB_Marks() << endl;
	}
};

class Result : public Marks{
	protected:
		int Total_marks;
		double Avg;
	public:
		Result(){	}	// default const.
		Result(int a, int b, int c, int d, int e, string f) : Marks(a,b,c,d,e,f) {	// para. const.
			Total_marks = 0;
			Avg = 0;
		} 

	void Calculate_Total_marks(){
		Total_marks = GetOOP_Marks() + GetPF_Marks() + GetDS_Marks() + GetDB_Marks();
	}
	void Calculate_Avg(){
		Avg = (Total_marks / 4 ) ;
		}
	
	void Display(){
		cout << "\n\tTotal Marks: " << Total_marks << "/400 "<< "\n\tAvg Marks: " << Avg << "%" << endl;;
	}
};

int main(){

	Result R1(85,95,75,65,5403,"Muhammad Tahir");	// 1st OBJECT
	
	cout << "  Student Information: " << endl;
	R1.GetStudentDetails();
	
	cout << endl << "  Marks: " ;
	R1.GetMarks();
	R1.Calculate_Total_marks();
	R1.Calculate_Avg();
	R1.Display();

	return 0;
}

