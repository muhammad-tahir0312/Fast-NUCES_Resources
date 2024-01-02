#include<stdio.h>
#include<math.h>
main()
{
	float sum=1,a,fac=1,p,no,x;
	
	printf("Enter the value of X: ");
	scanf(" %f",&x);		// INPUTTING BASE.
	printf("Enter N number of term: ");
	scanf(" %f",&no);		// INPUTTING RANGE.
	
	for(int i=1; i<no; i++)
		{
			p=pow(x,i);		// CALCULATING POWER OF BASE 'X'.
			fac = fac * i;	// CALCULATING FACTORIAL.
			a = p / fac;	// DIVIDING POWER OF BASE BY FACTORIAL ( TYLOR SERIES FORMULA ).
			sum += a;		// STORING RESULT.
		}
	printf("\n\n++++++++++++++++++++++++++++++++\n");
	printf("Answer of Taylor series: %.3f",sum);
	printf("\n++++++++++++++++++++++++++++++++\n");	
}
