#include<stdio.h>
main()
{
	int s1,s2,s3,s4, a1, a2, a3, a4;	// Declairing INT type variables.
	
printf("Enter four lengths of the quadrilateral.\n");
scanf("%d %d %d %d",&s1,&s2,&s3,&s4);					// Taking sides as input.
printf("Enter four angles of the quadrilateral.\n");
scanf("%d %d %d %d",&a1,&a2,&a3,&a4);					// Taking angles as input.
	
if(s1==s2 && s2==s3 && s3==s4 && a1==a2 && a2==a3 && a3==a4) 		// checking condition for square.
	{												   				// All sides are equal and all angles are equal.
		printf("This is square.");	//if yes then it will print The is square.
	}	
else if(s1==s3 && s2==s4 && a1==90 && a2==90 && a3==90 && a4==90)	// checking condition for RECTANGLE.
	{																// opposite sides are equal and all angles are equal to 90 degrees.
		printf("\nThis is a rectangle.");	//if yes then it will print This is a rectangle.
	}			
else if (s1==s2 && s2==s3 && s3==s4 && a1==a3 && a2==a4)			// checking condition for RHOMBUS.
	{																// all sides are equal and opposite angles are equal.
		printf("This is a rhombus.");	//if yes then it will print
	}
else if (s1==s3 && s2==s4 && a1==a3 && a2==a4)						// checking condition for PARALLELOGRAM.
	{																// opposite sides are equal and opposote angles are equal.
		printf("This is a parallelogram.");	 //if yes then it will print This is a rhombus.
	}		
else if (s1==s3 || s2==s3 && a1+a2==180 && a3+a4==180)				// checking condition for TRAPEZOID.
	{																//one of opposite sides are equal and sum of adjacent angles is 180 degrees.
		printf("This is a trapezoid.");	 //if yes then it will print This is a trapezoid.
	}
else if (s1==s4 && s2==s3 && a1==a3 || a2==a3)						// checking condition for KITE.
	{																// adjacent sides are equal and oppposite angles are equal.
		printf("This is kite.");	//if yes then it will print This is kite.
	}
else	// if no condition matched, printing error message.
	{
		printf("We dont have info about this shape!!! Try again.");
	}			
}
