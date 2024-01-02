#include<stdio.h>

int sum(int);

int main()
{
	int no,summ;
	
	printf("Enter a Five Digit Positive Number: ");
	scanf("%d",&no);
		
	if(no>9999 && no<=99999)
		{
			summ = sum(no);
			printf("SUM of %d = %d",no,summ);
		}
	else
		{
			printf("Invalid Input");
		}	
	return 0 ;
}

int sum(int no)
{
	int re=0,i,sum=0;

while(no != 0)
	{
		re = no % 10;
		sum += re;
		no /= 10;
	}
	return sum;
}
