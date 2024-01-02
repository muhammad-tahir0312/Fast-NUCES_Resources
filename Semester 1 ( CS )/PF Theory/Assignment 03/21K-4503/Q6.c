#include<stdio.h>
#include<stdlib.h>
main()
{
    int i, age, area;

for(i=1; i<=10; i++)	// LOOPING 10 TIMES ( ON MY CHOICE )
    {
        printf("\t=====================\n");
        printf("\t LOOP ITERATION : %d\n",i);
        printf("\t=====================\n\n");

        printf("Enter Your Age.");
        scanf("%d",&age);	// INPUTTING AGE 

        printf("Enter Your Area Code.\n\n");
        printf("\tPress 1 for Urban\n");
        printf("\tPress 2 for Rural\n");
        scanf("%d",&area);	// INPUTTING AREA

    if(age>=18 && area==1)		// APPLYING GIVEN CONDITIONS IN THE QUESTION.
        {
            printf("********\n");
            printf("YOU ARE ELIGIBLE FOR VACCINATION. \n\n\n");
            printf("********\n");
        }
    else if(age<18 && area==2)	// APPLYING GIVEN CONDITIONS IN THE QUESTION.
        {
            printf("********\n");
            printf("YOU ARE NOT ELIGIBLE FOR VACCINATION. \n\n\n");
            printf("********\n");
        }
    else	// IF GIVEN CONDITIONS ARE NOT MATCHED! THAN PRINTING ERROR!!!
        {
        	printf("ERROR: INVALID CHOICE!!\n");
        }
    }
}
