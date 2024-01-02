#include<stdio.h>
void middlevalue(int *, int);
int len;
int main()
{
	int i;
	int arr[len];
	
	printf("Enter Length of an arry: ");
	scanf("%d",&len);
	
	printf("\nEnter Elements in an arry: ");
	for(i=0; i<len; i++)
		{
			scanf("%d",&arr[i]);
		}	
	middlevalue(&arr,len);
	
	return 0;	
}
void middlevalue(int *p, int len)
{
	int x,y;
	if(len % 2 == 0)
		{
			x = len/2;
			y = x - 1;
			printf("1st & 2nd Middle element is %d & %d",*(p+y),*(p+x));			
		}
	else
		{
			x = len/2;
			printf("Middle element is %d",*(p+x));
		}
}
