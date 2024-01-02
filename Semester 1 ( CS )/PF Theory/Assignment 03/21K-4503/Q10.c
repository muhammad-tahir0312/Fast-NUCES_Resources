#include<stdio.h>
main()
{									// "a" is Base.
	int a,b,c,age,temp;				// "b" is Perpendicular.
									// "c" is Hypotenuse.
	printf("Enter your AGE: ");
	scanf("%d",&age);	// INPUTTING AGE.

	printf("\n======================================\n");
	if(age>0)	// CHECKING IF AGE IS GREATER THAN ZERO.
		{
			for(a=1; a<=age; a++)	// LOOPING TILL GIVEN VALUE OF AGE.
			{
				for(b=a+1; b<=age; b++)	// NESTED LOOP TILL GIVEN VALUE OF AGE.
				{
					for(c=a+2; c<=age;c++)	// AGAIN NESTED LOOP TILL GIVEN VALUE OF AGE.
						{
							temp = (a*a) + (b*b);	// [ APPLYING PYTHAGOROUS THEOREM ]
							if(temp == c*c)
								{
									printf("Pythagorean Triplets are: (%d, %d, %d)\n",a,b,c);	
								}	
						}
				}
			}
			printf("======================================\n");
		}
	else
		{
			printf("Invalid  Input.");
		}	
}
