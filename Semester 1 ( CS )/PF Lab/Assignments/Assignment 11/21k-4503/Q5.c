#include<stdio.h>

int add(int a, int b)
{
	int add;
	add = a + b;
	return add;
}
int sub(int a, int b)
{
	int sub;
	sub = b - a;
	return sub;
}
int mul(int a, int b)
{
	int mul;
	mul = a * b;
	return mul;
}
int div(int a, int b)
{
	int div;
	div = a / b;
	return div;
}

int main()
{
	int choice, a, b;
	
	int (*ptr[4]) (int x, int y);
	ptr[0]=add;
	ptr[1]=sub;
	ptr[2]=mul;
	ptr[3]=div;
	
	printf("Enter TWO Numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("Press 1 for Addition.\n");
	printf("Press 2 for Subtraction.\n");
	printf("Press 3 for Multiplicarion.\n");
	printf("Press 4 for Division.\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				printf("Addition of %d & %d = %d ",a,b,(*ptr[0]) (a,b));
				break;
			}
		case 2:
			{
				printf("Subtraction of %d & %d = %d ",a,b,(*ptr[1]) (a,b));
				break;
			}
		case 3:
			{
				printf("Multiplicarion of %d & %d = %d ",a,b,(*ptr[2]) (a,b));
				break;
			}
		case 4:
			{
				printf("Division of %d & %d = %d ",a,b,(*ptr[3]) (a,b));
				break;
			}
		default:
			printf("Invalid Input");
	}
	
	return 0;	
}
