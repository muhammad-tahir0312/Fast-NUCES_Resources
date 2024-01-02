#include <stdio.h>
#include <string.h>
struct Register{
	char CourseId[10];
	char CourseName[30];
	};
struct Student{
	char id[10];
	char fname[20];
	char lname[20];
	char no[12];
	char mail[30];
	struct Register a;
}s[5]; 
int main(void)
{
	int i, j;
	for(i = 0; i < 5; i++)
		{
			printf("Student <%d>\n", i + 1);
			printf("Enter Student ID: ");
			scanf("%s", s[i].id);
			printf("Enter first name: ");
			scanf("%s", s[i].fname);
			printf("Enter last name: ");
			scanf("%s", s[i].lname);
			printf("Enter cell number: ");
			scanf("%s", s[i].no);
			printf("Enter mail: ");
			scanf("%s", s[i].mail);
			printf("Enter course ID: ");
			scanf("%s", s[i].a.CourseId);
			printf("Enter course name: ");
			scanf("%s", s[i].a.CourseName);			
		}
	for(i = 0; i < 5; i++)
		{
			printf("\n\nStudent %d\n", i + 1);
			printf("Student ID: %s\n", s[i].id);
			printf("First name: %s\n", s[i].fname);
			printf("Last name: %s\n", s[i].lname);
			printf("Cell number: %s\n", s[i].no);
			printf("Email: %s\n", s[i].mail);
			printf("Course ID: %s\n", s[i].a.CourseId);
			printf("Course name: %s", s[i].a.CourseName);		
		}
	return 0;
}
