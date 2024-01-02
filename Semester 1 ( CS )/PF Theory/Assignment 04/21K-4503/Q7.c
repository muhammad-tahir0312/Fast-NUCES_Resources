#include<stdio.h>
struct s1{
	int date;
	int month;
	int year;
}t1,t2;

int main()
{
	
do
{
	int date1,month1,year1,date2,month2,year2;

	printf("Enter Date (1):\n");
	scanf("\n %d", &date1);

if(date1>0 && date1<31)		t1.date = date1;
else		{	printf("Date is out of range.\n\n"); continue;}
	
	printf("Enter Month (1):\n");
	scanf("\n %d", &month1);

if(month1>0 && month1<13)		t1.month= month1;
else		{	printf("Month is out of range.\n\n"); continue;}

	printf("Enter Year (1):\n");
	scanf("\n %d", &t1.year);
	
//	ASKING DATE , MONTH , YEAR AGAIN!!!!
	printf("\n\n\n");
	
	printf("Enter Date (2):\n");
	scanf("\n %d", &date2);

if(date2>0 && date2<31)		t2.date = date2;
else		{	printf("Date is out of range.\n\n"); continue;}
	
	printf("Enter Month (2):\n");
	scanf("\n %d", &month2);

if(month2>0 && month2<13)		t2.month = month2;
else		{	printf("Month is out of range.\n\n"); continue;}

	printf("Enter Year (2):\n");
	scanf("\n %d", &t2.year);
	break;
}
while(1);	

	if(t1.date==t2.date && t1.month==t2.month && t1.year==t2.year)
		{
			printf("\nYour Entered Date is Matched!!\n\t%d %d %d", t1.date, t1.month, t1.year);
		}
	else
		{
			printf("\nYour Entered Date is NOT Matched!!");
		}

	return 0;	
}
