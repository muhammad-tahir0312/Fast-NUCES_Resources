#include<iostream>
#include<string>

using namespace std;

class Employee{
	protected:
		string EName;
	    string EDeg;
	    string EDept;
	    string Email;
	    int Contact;
	    int Salary;
	    int Id;
	public:
		Employee() {}	// DEF. CONST.
	    Employee(string n, string d, string dep, string e, int c, int s, int i){
	        EName = n;
	        EDeg = d;
	        EDept = dep;
	        Email = e;
	        Contact = c;
	        Salary = s;
	        Id = i;
	    }
	//SET FUNCTIONS
    void SetName(string n)
    {
        EName = n;
    }
    void SetEDeg(string d)
    {
        EDeg = d;
    }
    void SetEDept(string dep)
    {
        EDept = dep;
    }
    void SetEmail(string e)
    {
        Email = e;
    }
    void SetContact(int c)
    {
        Contact = c;
    }
    void SetSalary(int s)
    {
        Salary = s;
    }
    void SetId(int i)
    {
        Id = i;
    }
	//GET FUNCTIONS	
    string GetEName()
    {
        return EName;
    }
    string GetEDeg()
    {
        return EDeg;
    }
    string GetEDept()
    {
        return EDept;
    }
    string GetEmail()
    {
        return Email;
    }
    int GetContact()
    {
        return Contact;
    }
    int GetId()
    {
        return Id;
    }
    int GetSalary()
    {
        return Salary;
    }
};

class Course{
	private:
		string CourseCode;
		string CourseName;
		string CourseCreHrs;
	public:
		Course(){	}	// DEF. CONST.
		Course(string A, string B, string C){
			CourseCode = A;
			CourseName = B;
			CourseCreHrs = C;
		}
	// GET FUNCTIONS
	string GetCourseCode(){
		return CourseCode;
	}
	string GetCourseName(){
		return CourseName;
	}
	string GetCourseCreHrs(){
		return CourseCreHrs;
	}
};

class Faculty : public Employee{
	protected:
		int WorkingHrs;
		Course CourseList[2];
	public:
		Faculty(){	}	// DEF. CONST.
		Faculty(int H,string A, string B, string C, string D, int E, int F, int G):Employee(A, B, C, D, E, F, G){
			WorkingHrs = H;
		}
	//SET FUNCTIONS
	void SetWorkingHrs(int w)
    {
        WorkingHrs = w;
    }
	//GET FUNCTIONS	
    int GetWorkingHrs()
    {
        return WorkingHrs;
    }
    // Extra func.
    void AssignCourse(Course course[]){
        for(int i=0; i<2; i++){
        	CourseList[i] = course[i];
   		}
   	}
	void PrintCourseList(){
	    for (int i = 0; i < 2; i++){
	        cout << "\n\t\tCOURSE CODE:" << CourseList[i].GetCourseCode() << endl;
	        cout << "\t\tCOURSE NAME:" << CourseList[i].GetCourseName() << endl;
	        cout << "\t\tCOURSE CREDIT HOURS:" << CourseList[i].GetCourseCreHrs() << endl;
	    }	    
	}
	// DISPLAY FUNCTION
	void Display(){
	    cout << "\tNAME:" << GetEName() << endl;
	    cout << "\tDESIGNATION:" << GetEDeg() << endl;
	    cout << "\tDEPARTMENT:" <<  GetEDept() << endl;
	    cout << "\tEMAIL:" <<  GetEmail() << endl;
	    cout << "\tCONTACT:" << GetContact() << endl;
	    cout << "\tSALARY:" << GetSalary() << endl;
	    cout << "\tID:" <<  GetId() << endl ;
	    cout << "\tWORKING HOURS:" << GetWorkingHrs() << endl<<endl;
	}
};

class Staff : public Employee{
	private:
    	string W_Hour;

	public:
	    Staff() {}	// DEF. CONST.
	    Staff(string H,string A, string B, string C, string D, int E, int F, int G):Employee(A, B, C, D, E, F, G){
			W_Hour = H;
		}
	//SET FUNCTIONS
    void SetW_Hour(string w){
        W_Hour = w;
    }
	//GET FUNCTIONS	
    string GetW_Hour(){
        return W_Hour;
    }
	// DISPLAY FUNCTION
    void Display(){		
	    cout << "\tNAME:" << GetEName() << endl;
	    cout << "\tDESIGNATION:" << GetEDeg() << endl;
	    cout << "\tDEPARTMENT:" <<  GetEDept() << endl;
	    cout << "\tEMAIL:" <<  GetEmail() << endl;
	    cout << "\tCONTACT:" << GetContact() << endl;
	    cout << "\tSALARY:" << GetSalary() << endl;
	    cout << "\tID:" <<  GetId() << endl ;
	    cout << "\tWORKING HOURS:" << GetW_Hour() << endl<<endl;
	}
};

int main(){
	
	Course C[2] = {Course("CL1020", "AP", "3 CREDIT HOUR"), Course("CL1030", "CAL", "3 CREDIT HOURS")};
	Staff S("5 HOURS", "M. Tahir", "CEO", "BSCS", "Khani@yahoo.com", 512, 265000, 6592);
	Faculty F(7, "Jafaith", "FACULTY MEMBER", "BSAI", "jafaith@gmail.com", 480, 65900, 6106);
	
	F.AssignCourse(C);

	cout << "STAFF MEMBER DETAILS:" << endl << endl;
  	S.Display();
    
    cout << "FACULTY MEMBER DETAILS:" << endl<<endl;
    F.Display();
	
	cout << "\tCourse List: " << endl;
	F.PrintCourseList();
	
 	return 0 ;
}

