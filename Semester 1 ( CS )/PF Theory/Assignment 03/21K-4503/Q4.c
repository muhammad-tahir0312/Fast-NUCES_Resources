#include<stdio.h>
main()
{
	int i, c1, c2, rounds, ans;
	
	printf("Enter time taken by 1st car: ");
	scanf("\n%d",&c1);		// INPUTTING TIME OF CAR 1.
	printf("Enter time taken by 2nd car: ");
	scanf("\n%d",&c2);		// INPUTTING TIME OF CAR 2.
	
	for(i = 1; i <= c1 && i <= c2; i++)		// LOOPING UNTIL 'i' IS GREATER THAN GIVEN TIME OF CAR 1 & CAR 2.
		{
			if(c1 % i == 0 && c2 % i == 0)		// CALCULATING NUMBER OF ROUNDS OF CAR1 & CAR2.
				{
					rounds = i;		// STORING TOTAL NUMBER OF ROUNDS.
				}
		}
	ans = c1*c2 / rounds;		// MULTIPLYING TIME OF CAR1 & CAR2, THAN DIVIDING BY NUMBER OF ROUNDS.
	
	printf("\n\n###############################################################\n");
	printf("The time at which SA_a and SA_b will meet each other = %dmins", ans);
	printf("\n###############################################################");
}
