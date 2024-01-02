#include<stdio.h>
int min(int *, int);
int max( int *, int);
int len;
int main()
{
	printf("Enter Length of an array: ");
	scanf("%d",&len);
	
	int i, arr[len];	
	for(i=0; i<len; i++)
		{
			printf("\nEnter Elements in Array: ");
			scanf("%d",&arr[i]);
		}		
	printf("\nMax = %d ",max(arr,len));
	printf("Min = %d ",min(arr,len));
	
	return 0;
}
int min(int *p,int len)
{
	int i,min = *(p);
	for(i=0; i<len; i++)
		{
			if(min > *(p+i))
				{
					min = *(p+i);
				}
		}
	return min;
}
int max(int *p,int len)
{
	int i,max = *(p);
	for(i=0; i<len; i++)
		{
			if(max < *(p+i))
				{
					max = *(p+i);
					//	printf("max = %d",max);
				}
		}
	return max;	
}
