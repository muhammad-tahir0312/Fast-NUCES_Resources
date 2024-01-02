#include<stdio.h>

void incre(int [], int);
int len,var;	// Declearining GLOBAL variables.

int main()
{
	int i;
	
	printf("Enter Length of an Array: ");
	scanf("%d",&len);	
	int arr[len];
	
	printf("Enter Value of increment variable: ");
	scanf("%d",&var);
	printf("\n\n");
	
	for(i=0; i<len; i++)
		{
			printf("Enter Element<%d> : ",i+1);
			scanf("%d",&arr[i]);
		}
	printf("\n\n");
	for(i=0; i<len; i++)
		{
			printf("Initial Array = %d\n",arr[i]);
		}
		
	printf("\n\n");	
	int b[0];
	
	incre(arr , len);	// CALLING FUNCTION

	for(i=0; i<len; i++)
		{
			printf("Encrypted Array by %d = %d\n",var,arr[i]);
		}
		
	return 1;
}

void incre(int arr[], int len)
{
	int i;	
	for(i=0; i<len; i++)
		{
			arr[i] += var;
		}
}
