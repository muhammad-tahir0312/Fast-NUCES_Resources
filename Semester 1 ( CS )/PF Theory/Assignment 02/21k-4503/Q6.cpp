/* I ALREADY ASKED SIR BASIT JASANI AND HE SAID IT'S FINE IF YOU 
HAVE USED LOOPS BECAUSE WE ALREADY STUDIED IT IN CLASS BEFORE MID-1 */ 

#include<stdio.h>
main()	
{
	int n, x, sum=0, temp;	// declearing INT type variables.
	
printf("Enter five-digit positive integer: ");	
scanf("%d", &n);	// Taking five-digit positive integer as Input and storing in variable('n').

    temp = n;  	// storing value of 'n' in variable "temp" to use later.
    
if (n>0 && n<99999)	// Checking if number is in range. 
{
	while (n != 0) // while loop until given number isn't equas to zero.
		{
  	    	x = n % 10;	// finding remainder of given number ('n') by using modulus operator and storing in variable('x').
  	    	sum = sum * 10 + x;	// multiplaying valuse of 'sum' each time by 10 than adding value of 'x' and storing in 'sum' variable.
  	    	n /= 10;	// discarding last digit each time when dividing ('n') by 10 and again storing in variable('n')
  	    				// { because INT type discard point value }
 	   }
	if (temp==sum)	//if both variables 'temp' and 'sum' are equal.... 
		{
			printf("It is PALINDROME!!.");	// than printing It is PALINDROME.
		}
	else
		{
			printf("It is not PALINDROME");	// than printing It is not PALINDROME.
		}
}
else 	// if number isn't in range, printing error message.
{
		printf("Error! Invalid input, Pls try again...");	
}

}
