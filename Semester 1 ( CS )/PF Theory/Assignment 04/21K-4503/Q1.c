#include<stdio.h>
int avg(int);
int per(int,int);
float marks=0;	// Declearining a GLOBAL variable.

int main()
{
	float sub, average, percentage;
	
	printf("Enter Number of Subjects: ");
	scanf("%f",&sub);
	
	average = avg(sub);
	printf("\nAverage of %.0f subjects = %.2f",sub,average);
	
	percentage = per(marks,sub);
	printf("\nPercentage of %.0f subjects = %.2f",sub,average);
	
	return 0;
}

int avg(int sub)
{
	int i;
	float sum;

	for(i=1;i<=sub;i++)
		{
			printf("\nEnter Marks of %d subject<s> : ",i);
			scanf("%f",&marks);
			sum += marks;
		}
	marks = sum / sub;
	
	return marks;
}

int per(int marks,int sub)
{
	float per;
	
	per = marks/sub;
	
	return per;
}
