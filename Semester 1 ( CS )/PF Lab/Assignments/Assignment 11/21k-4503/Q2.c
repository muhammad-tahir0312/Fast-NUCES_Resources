#include<stdio.h>
int sum(int *,int);
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
		
	printf("\n\nArray :\n");
	for(i=0; i<len; i++)
		{
			printf("%d ",*(arr+i));
		}
		
	printf("\n\nSUM of Array = %d",sum(&arr,len));
	
	return 0;
}

int sum(int *p,int len)
{
	int i,s=0;
	for(i=0; i<len; i++)
		{
			s += *(p+i);
		}
	return s;
}
