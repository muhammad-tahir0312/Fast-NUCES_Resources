#include<stdio.h>
int main()
{
    float no, ne=0, posi=0, zero=0;
    int r,i;
	printf("\n\tEnter Range of Real Numbers: "); 	// ASKING FOR RANGE
    scanf("%d",&r);
    
for(i=1; i<=r; i++)
    {
    printf("Enter %d Real Number: ",i);		// INPUTTING REAL NUMBERS.
    scanf("%f",&no);
    
    if(no<0)	// APPLYING GIVEN CONDITIONS IN QUESTION.
        {
            ne++;
        }
    else if(no>0)	// APPLYING GIVEN CONDITIONS IN QUESTION.
        {
            posi++;
        }
    else if(no==0)	// APPLYING GIVEN CONDITIONS IN QUESTION.
        {
            zero++;
        }
    else
        {
            printf("Invalid Input. \n");
        }
    }

printf("\n×××××××××××××××××××××××××××××�\n\n"); 
printf("Total %.0f NEGATIVE numbers are entered.\n",ne);
printf("Total %.0f POSITIVE numbers are entered.\n",posi);
printf("Total %.0f ZERO's are entered.\n",zero);
	  
	//    ### CALCULATING MAJORITY COUNT ### 	  
	  
    if(ne>posi && ne>zero)
    	{
    		printf("\nMajority entered numbers are NEGATIVE.\n");
		}
	else if(posi>ne && posi>zero)
    	{
    		printf("\nMajority entered numbers are POSITIVE.\n");
		}
	else if(zero>posi && zero>ne)
    	{
    		printf("\nMajority entered numbers are ZERO.\n");
		}
	else if(ne == posi && ne>zero && posi>zero)
		{
			printf("\nMajority entered numbers are NEGATIVE & POSITIVE [EQUAL].\n");
		}
	else if(zero == posi && zero>ne && posi>ne)
		{
			printf("\nMajority entered numbers are ZERO & POSITIVE [EQUAL].\n");
		}
	else if(zero == ne && ne>posi && zero>posi)
		{
			printf("\nMajority entered numbers are NEGATIVE & ZERO [EQUAL].\n");
		}
	else
		{
			printf("\nMajority entered numbers are NEGATIVE , ZERO & POSITIVE [EQUAL].\n");
		}
printf("\n×××××××××××××××××××××××××××××�\n");   

}
