/* I ALREADY ASKED SIR BASIT JASANI AND HE SAID IT'S FINE IF YOU 
HAVE USED LOOPS BECAUSE WE ALREADY STUDIED IT IN CLASS BEFORE MID-1 */ 

#include<stdio.h>
main()
{
	/////////////// [ CONVERTING DECIMAL TO BINARY ] ////////////////
	
	int no, temp, remainder, binary=0, i=1;	// declairing INT type variables
	
	printf("Enter last two digits of your roll number: ");
	scanf("%d",&no);	// Taking four digits as input

if(no>=0 && no<=99) // checking if given number is in between range
{
	temp = no;	// storing given number in temporary variable to use later.
	
	while(no!=0)	// using while loop until number is ZERO.
	{
			remainder= no % 2;	// storing last digit of given number in remainder
			no = no / 2;		// dividing "no" by 2 and storing in "no"
			binary = binary + ( remainder * i);	// multiplying remainder by "i" , adding & storing with binary variable.
			i = i * 10;	// multiplying value of "i" by 10 & storing in "i" 
	}
	
	printf("\nThe binary equivalent of %d is %d ",temp ,  binary);	// Printing Final Result 
	
	///////////// [ CONVERTING BINARY TO DECIMAL ] ////////////////
	
	int deci=0, n, tep, re, j=1;	// declairing INT type variables
		
	n = binary;		// storing obtained binary value to use later
	tep = binary;	// storing obtained binary value to use later
	
	while(n!=0)		// using while loop until number is ZERO
	{
			re= n % 10;	// storing last digit of given number in re
			deci = deci + ( re * j);	// multiplying re by "j" , adding & storing with deci variable.	
			n = n / 10;	// dividing "n" by 10 and again storing in "n"
			j = j * 2;	// multiplying value of "j" by 10 & storing in "j" 
	}
	
	printf("\nThe decimal equivalent of %d is %d ", tep, deci);	 // Printing Final Result
}
else	// if number isn't in range, printing ERROR
{
	printf("Try again!!");
}	
}
