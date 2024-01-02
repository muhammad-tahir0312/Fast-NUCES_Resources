#include<stdio.h>
main()
{
    int n,a,i,j;
        
    printf("Enter Number In Range [1~26 DIGITS]: ");   
    scanf("%d",&n);   //  INPUTTING NUMBER IN RANGE 1~26 DIGITS.
    
    if(n<0 || n>26)		// CHECKING IF NUMBER IS IN RANGE.
    	{
    		printf("\nInvalid Input.");
		}
	else
		{
			printf("\n===========================\n");    
			for(i=1; i<=n; i++)
   				{
   					a=96;	// ASCII FOR "a" IS 96. 
        			for(j=1; j<=i; j++)
            			{
             			   a++;		// INCREMENTING THIS VALUE TO GET NEXT VALUE OF ALPHABET.
            			    printf("%c",a);		// "a" ABOVE IS DECLEARED AS INTEGER, BUT 
						}						// USING "%c" TO GET THE CHARACTER AS OUTPUT.
        			printf("\n");
    			}
    		printf("=============================");	
		}
}
