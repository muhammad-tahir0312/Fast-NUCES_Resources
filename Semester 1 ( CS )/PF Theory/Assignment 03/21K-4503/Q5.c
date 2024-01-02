#include<stdio.h>
#include<math.h>
main()
{
	int j,i,number,re,xi=1,yi=3,xf,yf;
	float N,t,D;
	
	printf("Enter Your 7 digit Phone Number: ");	// TAKING N WHICH IS THE (non- zero) MSD of MOBILE NUMBER .
	scanf("%d",&number);							// RANGE IS 7 AFTER EXCLUDING "PREFIX CODE"
	
if(number>999999 && number<=9999999)	// CHECKING IF NUMBER IS IN GIVEN RANGE 1~7 DIGITS.
	{
		for(i=1; i<=7; i++)
			{
				re = number % 10;
				number /= 10;
				if(number == 0)
					{
						t += re;
						printf("MSD =%.2f\n",t);	// CALCULATING MSD OF INPUT NUMBER.
						break;	
					}	
			}
			printf("\n# :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@: #");
			
		if(t>0 && t<=9)		// APPLYING GIVEN CONDITIONS.
			{
				N = pow(2,t)*0.0625;
				printf("\nN = %f",N);
			}
		else		
			{
				N = pow(2,t)*4+3;
				printf("\nN = %.0f",N);
			}
	// CALCULATING & PRINTING DISTANCE BY ASKING CO-ORDINATES(X,Y)	
	
	// ###PROGRAM WILL END IF VALUE OF "N" IS LESS THAN 1###	
		if(N>=1)
			{
				printf("\n\nEnter %.0f number(s) of location(s).",N);	
				for(j=1; j<=N; j++)		// LOOPING TILL THE CALCULATED NUMBR "N"
					{
						printf("\n\nEnter %d ordered pair:\n",j);
						scanf("%d %d",&xf,&yf);
				
						D = sqrt(pow((xi-xf),2) + pow((yi-yf),2));	// DISTANCE FORMULA
						printf("Distance between (%d,%d) & (%d,%d) = %f",xi,xf,yi,yf,D);
					}	
			}	
		printf("\n# :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@: #");
	}
else 
	{
		printf("Error: Invalid Range.");
	}
}
