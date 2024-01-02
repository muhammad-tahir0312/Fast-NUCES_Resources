#include<stdio.h>
int main()
{

	for(int i=3; i<=10; i++)
		{
			if(i % 2 == 1)
				{
					printf("\nOdd number between 3 & 10 is: %d",i);
					printf("\n*==========*");
		
				 for(int j=1; j<=10; j++)
				 	{
				 		
						printf("\n%d * %d = %d",i,j,i*j);					
				 	}
				printf("\n*==========*");	
				} 
		}
}
