#include<stdio.h>
int lcm(int,int);
int inp();

int main()
{
	inp();	
}

int inp()
{
	int num1,num2,z;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);

	z = lcm(num1,num2);
	printf("The LCM of %d and %d = %d",num1,num2,z);
}

int lcm(int x,int y)
{
	int t=1,i;
	for(i=0; ; i++)
	{
		if(t % x == 0 && t % y == 0)
		{
			return t;
		}
		else
		{
			t++;
		}
	}	
}
