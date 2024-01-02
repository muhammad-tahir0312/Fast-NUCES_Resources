#include<stdio.h>
main()
{
	float x1,y1,x2,y2,x3,y3,x4,y4,z,x,c;	// declearing FLOAT type variables
	
	printf("Enter the cooerdinates of 1st point (x1,y1):\n");
	scanf("%f %f",&x1,&y1);		// Taking 1st cooerdinate
	printf("Enter the cooerdinates of 2nd point (x2,y2):\n");
	scanf("%f %f",&x2,&y2);		// Taking 2nd cooerdinate
	printf("Enter the cooerdinates of 3rd point (x3,y3):\n");
	scanf("%f %f",&x3,&y3);		// Taking 3rd cooerdinate
	printf("Enter the cooerdinates of 4th point (x4,y4):\n");
	scanf("%f %f",&x4,&y4);		// Taking 4th cooerdinate
	
	z = (x2-x1)/(y2-y1);	 				   
	x = (x4-x3)/(y4-y3);	// Finding SLOPE by using SLOPE FORMULA.
	c = (x3-x1)/(y3-y1);		
	
	if(z==x && z==c) // SLOPE OF STRAIGHT LINE is SAME at every point,   
	{				 // checking if all SLOPES are all EQUAL.
		printf("The given points lie on the same line.");	//if they are than it is STRAIGHT LINE.
	}
	else	// if they aren't equal than it isn't a straight line.
	{		
		printf("Ponits are not linear!!!");
	}
} 
