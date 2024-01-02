/* I ALREADY ASKED SIR BASIT JASANI AND HE SAID IT'S FINE IF YOU 
HAVE USED LOOPS BECAUSE WE ALREADY STUDIED IT IN CLASS BEFORE MID-1 */ 

#include<stdio.h>
main()
{
	int x, y, o, i; // declearing INT type varaibles
	
	printf("Enter four digits positive integer: ");
	scanf("%d",&x);	// Taking 4 positive digits as Input
		
if (x>=0 && x<9999) // Checking if number is in range.
	{
		printf("Enter last digit 0f your roll number: ");
		scanf("%d",&y);		// Taking last digit of roll number as Input
	
	while(x>0)	// looping until value of "x" is greater than 0.
		{
			i= x%10;	// storing last digit of given number in 'i'.
			x/=10;		// eliminating last digit each time dividing 'x' by 10. { because INT type discard point value }
			if (i == y)	// IF conditon to check how many times 'last digit of roll number' is occured.
				{		
					o++;	// if condition is true then incriment 'o' by 1.	
				}
		}	
	printf("%d occured %d times only.",y,o);	// printing how many times last digit of roll no. occured in 4 positive digits.			
	}	
else	// if number isn not in range, printing error message.
	{
		printf("Invalid integer! Execute program again and enter a valid integer.");
	}				
}
