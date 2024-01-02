#include<stdio.h>
main()
{
	float arr[6], swap;

	for(int i=0; i<=5; i++)
		{
			printf("Enter Elements: ");
			scanf(" %f",&arr[i]);
		}
		
	for(int i = 0 ; i < 6; i++)
		{		
			for(int j = 0; j < 6-i-1; j++)
			{
				if(arr[j] < arr[j+1]) 
				{
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
				}
			}
		}
	printf("Array in Desscending Order: \n");
	for (int q=0; q<=5; q++)
		{
			printf("\n%f",arr[q]);
		}

}
