#include<stdio.h>
int main()
{
    int sum=0, avg=0,s=03,t;

    printf("Enter size of an array.\n");
    scanf("%d",&s);
    t = s;
    int arr[s] ;
    
	for(int i=1; i<=s; i++)
		{
			printf("Enter %d Element.\n",i);
    		scanf("%d",&arr[i]);	
		}
						
	for(int j=1; j<=s; j++)
		{
			if(arr[j] > 0)
			{
				sum = sum + arr[j];
				avg = sum / t;
			}		
		}
	printf("Average of sum %d is %d",sum,avg);	
}
