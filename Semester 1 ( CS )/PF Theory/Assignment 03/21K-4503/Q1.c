#include<stdio.h>
#include<stdlib.h>
main()
{
	int month,day,year,re1,re2,re3,k=1,oct1,oct2,oct3;	
	
	printf("Enter Month of your Birthday: \n");
	scanf("%d",&month);
	printf("Enter day of your Birthday: \n");
	scanf("%d",&day);
	printf("Enter year of your Birthday: \n");
	scanf("%d",&year);
	
if(month<0 || month>12)		// CHECKING IF NUMBER IS IN RANGE 1~12
	{
		printf("Invalid Input of Month!.");	
	}
else if(day<0 || day>31)	// CHECKING IF NUMBER IS IN RANGE 1~31
	{
		printf("Invalid Input of day!.");
	}
else
{
	int t1=month, t2=day,t3=year;
	
	while(month!=0)
		{
			re1 = month % 8;
			oct1 =  re1 * k + oct1;		//CONVERTING MONTH IN OCTAL
			k = k * 10;
			month = month / 8;
		}
	k=1;
	
	while(day!=0)
		{
			re2 = day % 8;
			oct2 =  re2 * k + oct2;		//CONVERTING DAY IN OCTAL
			k = k * 10;
			day = day / 8;
		}
	k=1;
	
	while(year!=0)
		{
			re3 = year % 8;
			oct3 =  re3 * k + oct3;		//CONVERTING YEAR IN OCTAL
			k = k * 10;
			year = year / 8;
		}
	printf("\n\n========================================================\n");
	printf("Your birth day [ %d-%d-%d ] in octal is [ %d-%d-%d ]",t1,t2,t3,oct1,oct2,oct3);
	printf("\n========================================================\n");
}
}
