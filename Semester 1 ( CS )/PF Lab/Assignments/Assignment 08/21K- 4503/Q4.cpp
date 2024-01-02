#include<stdio.h>
int main()
{
    int s1,s2,ss,a;
    int arr1[6] ;
    int arr2[6] ;
    
	for(int i=0; i<=5; i++)
		{
			printf("Enter Elements of Array 1: \n");
    		scanf("%d",&arr1[i]);	
		} 
	
	for(int i=0; i<=5; i++)
		{
			printf("Enter Elements of Array 2: \n");
    		scanf("%d",&arr2[i]);	
		} 
		
	for(int j=0; j<=5; j++)
		{
			if(arr1[j] == arr2[j])
				{
					ss++;
				}
			else
			{
				a++;
			}
		}
		
	if(ss==6)
		{
			printf("\n===================");
			printf("\nArray is Symmetric");
			printf("\n===================\n");
		}	
	else
		{
			printf("\n===================");
			printf("\nArray is Asymmetric");
			printf("\n===================\n");
		}
}

