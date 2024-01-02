#include<stdio.h>

int p_chk();
int rev(int no);

int main()
{
	p_chk();
}

int p_chk()
{
	int a=0, no=0;
	
	printf("Enter any Number: ");
	scanf("%d",&no);
		
	a = rev(no);
	if(a==no)
	{
		printf("This is a Palindrome!!");
	}
	else
	{
		printf("This is NOT a Palindrome!!");	
	}	
}

int rev(int no)
{
	int a=0,m=0;
	
	while(no!=0)
	{
		a =	no % 10;
		m = a+ (m* 10);
		no /= 10;
	}	
	return m;		
}
