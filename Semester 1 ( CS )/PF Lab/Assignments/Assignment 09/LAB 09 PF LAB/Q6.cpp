#include<stdio.h>
int prime(int x);

int main()
{
	int m,no;
	printf("Enter four digits number: ");
	scanf("%d",&no);
	if(no>999 && no<=9999)
	{
        m = prime(no);
        if(m==1){
        	printf("PRIME NUMBER.");
		}
    	else{
    		printf("NOT A PRIME NUMBER.");
		}
	}
	else
	{
	    printf("Number is Out of Range.");
	}
}

int prime(int x)
{
   	int a=0, i, n;
	n= x;
	for(i=1; i<=x; i++)
		{
			if(n % i == 0)
				{
					a++;
				}
		}
		
	if(a==2)
	{
		return 1;	// prime number
	}
	else
	{
	    return 0;	// not a prime number
	} 
}
