#include<stdio.h>
void swap(int *, int *, int *);

int main()
{
	int a, b, c;
	printf("Enter value of num1: ");
	scanf("%d", &a);
	printf("Enter value of num2: ");
	scanf("%d", &b);
	printf("Enter value of num3: ");
	scanf("%d", &c);
	printf("\nBefore swapping:  %d  %d  %d", a, b, c);
	swap(&a,&b,&c);
	printf("\n\nThe Swapped Numbers are: %d %d %d",a,b,c);

	return 0;
}

void swap(int *p, int *pr,int *prr)
{
	int t;
	
	t = *p;
	*p = *pr;
	*pr = *prr;
	*prr = t;
}
