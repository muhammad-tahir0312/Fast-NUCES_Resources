#include<stdio.h>
int main()
{
    int t,max,min;
    int arr[10] ;
    
	for(int i=0; i<=9; i++)
		{
			printf("Enter Marks of 10 students: \n");
			scanf("%d",&t);
			
			if(t>0 && t<=10)
				{
					arr[i] = t;
				}	
			else
				{
					printf("Wrong!!\n\n");
				}
		} 
	max = arr[0];
		
		for(int j=1; j<=9; j++)
			{
				if(max<arr[j])
					{
						max = arr[j];
					}
			}
		printf("\n Max =%d",max);
		
	min = arr[0];
		
		for(int j=1; j<=9; j++)
			{
				if(min>arr[j])
					{
						min = arr[j];
					}
			}
		printf("\n Min =%d",min);
		
	for(int q=0; q<=9; q++)
		{
			printf("\n\nShowing marks in entered order.%d",arr[q]);
		}
}
