#include<stdio.h>
#include<stdlib.h>	//	[ ADDING "stdlib" TO USE "RANDOM" FUNCTION].
main()
{
	int range,ran,count=0,i,j,k,l;
	
	printf("Enter Range 10~100: \n");
	scanf("%d",&range);		// INPUTTING RANGE 
	
	for(i=0; i<=range; i++)		// LOOPING TILL GIVEN RANGE
		{
			ran = rand()%range;
	// ########################################################
	// [RUN THE LINE "BELOW" IF YOU WANT TO SEE THE VALUE OF GENERATED RANDOM NUMBERS].
		//	printf(" GENERATED RANDOM NUMBER = %d\n\n",ran);
			count=0;
			for(j=1; j<=ran; j++)
				{
					if(ran % j == 0) // CONDITION FOR PRIME NUMBER:
						{
							count++;
						}	
				}
			if(count == 2)	// IF IT IS A PRIME NUMBER,
				{
					printf("#####################\n");	// THAN,
					for(k=1; k<=21; k++)
						{
							printf("AbnormalSituation");	// PRINTING Abnormal Situation.
						}								    // AND
					printf("\n#####################\n\n");
					break;									// TERMINATING THIS BLOCK,!!!
				}
			else	// IF IT IS NOT A PRIME NUMBER,
				{
					printf("#####################\n");	// THAN,
					for(l=1; l<=24; l++)
						{
							printf("NormalSituation");	// PRINTING Normal Situation.
						}									// AND
					printf("\n#####################\n\n");	// LOOPING BACK AGAIN!!!
				}	
		}		
}
