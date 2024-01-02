#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class Course{
	private:
		string stuname;
		int stuid;

	public:
		Course(string n, int i) // CONSTRUCTOR
		{
			stuname=n;
			stuid=i;
		}

	string gradecalc(void)
		{
		double quiz1 ,quiz2, quiztotal, ass1, ass2, asstotal, mid1, mid2, midtotal, final, finaltotal, totalmarks=0;
		string grade;
		
		cout << "Enter Quiz 1 Marks (Out of 10): ";
		cin >> quiz1;
			if(quiz1>10 || quiz1<0)
				{
					cout << "Wrong input";
				}
		else
			{
			cout << "Enter Quiz 2 Marks (Out of 10): ";
			cin >> quiz2;
				if(quiz2>10 || quiz2 <0)
					{
						cout << "Wrong input: ";
					}
			else
				{
				quiztotal= (quiz1+quiz2)*0.5;// IMPLEMENTING WEIGHTAGE CONDITIONS
				cout << "Enter Assignment 1 Marks (Out of 40): ";
				cin >> ass1;
					if(ass1>40 || ass1<0)
						{
							cout << "Invalid Input";
						}
				else
					{
					cout << "Enter Assignment 2 Marks (Out of 40): ";
					cin >> ass2;
						if(ass2>40 || ass2<0)
							{
							cout << "Invalid Input";
							}
					else
						{
						asstotal = (ass1+ass2)*0.12;// IMPLEMENTING WEIGHTAGE CONDITIONS
						cout << "Enter Mid 1 Marks (Out of 30): ";
						cin >> mid1;
							if(mid1>30 || mid1<0)
								{
									cout << "Invalid Marks Entered: ";
								}
					else
						{
						cout << "Enter Mid 2 Marks (Out of 30): ";
						cin >> mid2;
							if(mid2>30 || mid2<0)
								{
									cout << "Invalid Marks Entered: ";
								}
						else
							{
							midtotal = (mid1+mid2) * 0.5;// IMPLEMENTING WEIGHTAGE CONDITIONS
							cout << "Enter Final Exam Marks (Out of 100): ";
							cin >> final;
								if(final>100 || final <0)
									{
										cout << "Invalid Input: ";	
									}	
							else
								{
									finaltotal = final*0.50;// IMPLEMENTING WEIGHTAGE CONDITIONS
									totalmarks = finaltotal + quiztotal + midtotal + asstotal;
									cout << "Total Marks: " << totalmarks;
									
									if(totalmarks>=90)
											{
												grade="A";
											}
									else if(totalmarks>85 && totalmarks<90)
										{
											grade="B+";
										}
									else if(totalmarks>=80 && totalmarks<=85)
										{
											grade="B";
										}
									else if(totalmarks>=70 && totalmarks<80)
										{
											grade="B-";
										}
									else if(totalmarks>65 && totalmarks<70)
										{
											grade="C+";
										}
									else if(totalmarks>=60 && totalmarks<=65)
										{
											grade="C";
										}
									else if(totalmarks>55 && totalmarks<60)
										{
											grade="D+";
										}
									else if(totalmarks>=50 && totalmarks<=55)
										{
											grade="D";
										}
									else if(totalmarks<50)
										{
											grade="F";
										}									
									return grade;		
								}
							}	
						}
					}		
				}
			}
		}
	}
	
};

int main()
{
	string std_name, grade, course_name; 
	int id;
		
	cout << "Enter Student's Name: ";
	getline(cin,std_name);
	cout << "Enter Course Name: ";
	getline(cin,course_name);
	cout << "Enter Student's ID: ";
	cin >> id;
	
	// OBJECT # 01
	Course C1(std_name, id);
	grade = C1.gradecalc();
	
	cout << endl << endl << "Student's Name: " << std_name << endl;
	cout << "Student's ID: " << id << endl;
	cout << "Course Name: " << course_name << endl;
	cout << endl << "Grade : " << grade;
	
	return 0;	
}
