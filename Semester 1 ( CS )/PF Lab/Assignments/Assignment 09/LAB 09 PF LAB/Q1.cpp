#include<stdio.h>
#include<string.h>
main()
{
	char str[10],str1[10];
	
	printf("Enter String 01: ");
	gets(str);	
	printf("Enter String 02: ");
	gets(str1);
		
	printf("\nFirst name = %s",str);
	printf("\nsecond name = %s",str1);
		
	printf("\n\nFirst name & Last name = %s",strrev(strcat(str,str1)));	
}
