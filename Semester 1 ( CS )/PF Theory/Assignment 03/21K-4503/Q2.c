#include<stdio.h>
#include<math.h>
main()
{
	int birth,s_id,re,lsd, no,prime,num1=0,num2=1,num3=0;
	
	printf("Enter your Birth Year: ");
	scanf("%d", &birth);
	printf("Enter your Student ID (1~4 DIGITS): ");
	scanf("%d", &s_id);	
	
if(s_id<0 || s_id>9999)		//CHECKING IF STUDIENT ID IS IN RANGE 1~4 DIGITS.
	{
		printf("Invalid input.");
	}
else
{
	for(int i=1; i<=3; i++)
		{
			re = birth % 10;		//	[ CALCULATING MSD OF BIRTH YEAR ]
			birth = birth / 10;
		}
	printf("\nMSD OF BIRTH YEAR: %d",birth);
	
	lsd = s_id % 10;						
	printf("\nLSD OF STUDEENT ID: %d",lsd);		// [ CALCULATING LSD OF STUDEENT ID ]
	
	prime = pow(2,5);	// [ CALCULATING 2^ 3rd SMALLEST PRIME NUMBER ]
	
	no = birth + lsd + prime;	// [ SUM OF ALL ABOVE CALCULATED VALUES ]
	printf("\n\nLength of the sequence: %d",no);
	
	printf("\n\nFibonacci Series in range (0-%d) is: \n",no);
	while(num3<=no)
		{
			printf("\n%d",num3);
			num1=num2;				// [ Fibonacci Series ]
			num2=num3 ;
			num3=num1+num2;
		}
}
}
