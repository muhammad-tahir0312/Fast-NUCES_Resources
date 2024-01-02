#include<stdio.h>

int display(void);
int max(int arr[], int);
int min(int arr[], int);
int sum(int arr[], int);
int len=0;	// Declearining a GLOBAL variable.

int main()
{	
	display();
	
	return 0 ;
}

int display(void)
{
	int i;
	printf("Enter Length of an array: ");
	scanf("%d",&len);
	
	int arr[len];
	
	for(i=0; i<len; i++)
		{
			printf("Enter Element(%d) in Array: ",i+1);
			scanf("%d",&arr[i]);
		}
	 
		printf("\nSum of Array = %d",sum(arr,len));
		printf("\nMax Element in Array = %d",max(arr, len));
		printf("\nMin Element in Array = %d",min(arr, len));
		
	return 0;
}



int max(int arr[],int len)
{
	int i, t=arr[0];
	for(i=1; i<len ; i++)
		{
			if(t<arr[i])
				{
					t=arr[i];
				}	
		}
	return t;
}


int min(int arr[] , int len)
{
	int i, t=arr[0];
	for(i=1; i<len; i++)
		{
			if(t>arr[i])
				{
					t=arr[i];
				}
		}
	return t;
}



int sum(int arr[], int len)
{	
	int i,sum=0;
	for(i=0; i<len; i++)
		{
			sum += arr[i];
		}
	return sum;
}
