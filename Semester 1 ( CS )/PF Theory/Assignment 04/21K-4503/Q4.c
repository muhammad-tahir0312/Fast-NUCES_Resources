#include<stdio.h>

void Sort(int arr[], int);
void takeArray(int arr[], int);
void printArray(int arr[], int);

int len=0,arr[]= {0};	// Declearining GLOBAL variables.

int main() 
{	
	printf("Enter length of an array: \n");
	scanf("%d",&len);
	
	takeArray(arr, len);

printf("\n\nInitial Array :\n");	
printArray(arr, len);
	
  	Sort(arr, len); 	
  
printf("\nSorted Array in Ascending Order:\n");
printArray(arr, len);

	return 0;
}

void Sort(int arr[], int len) 
{
	int j,i,t;
	
  for (j = 0; j < len - 1; j++) 
	{    
	    for (i = 0; i < len - j - 1; ++i) 
			{
		      if (arr[i] > arr[i + 1]) 
				{
			    	int t = arr[i];
			        arr[i] = arr[i + 1];
			        arr[i + 1] = t;
			    }
		    }
	}
}

void printArray(int arr[], int len) 
{
	int i;
	
	for (i = 0; i < len; i++) 
		{
    		printf("%d  ", arr[i]);
  		}
  	printf("\n");
}

void takeArray(int arr[], int len)
{
	int i;
	arr[len];
	
for(i = 0; i < len; i++)
	{
		printf("Enter Element(%d) in array: ",i+1);
		scanf(" %d",&arr[i]);
	}	
}
