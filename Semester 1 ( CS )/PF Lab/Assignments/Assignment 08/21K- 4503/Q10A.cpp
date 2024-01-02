#include<stdio.h>
main()
{
	int i,n,j;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n\n");
	for( i=1; i<=n; i++)
		{
			for(j=i; j<=n; j++)
				{
					printf("*");
				}
			for(j=1; j<=(i*2-2); j++)
				{
					printf(" ");
				}
			for(j=i; j<=5; j++)
				{
					printf("*");
				}
			printf("\n");
		}	
	for(i=1; i<=n; i++)
		{
			for(j=1; j<=i;j++)
				{
					printf("*");
				}
			for(j=1; j<=(n*2-i*2); j++)
				{
					printf(" ");
				}
			for(j=1; j<=i;j++)
				{
					printf("*");
				}
			printf("\n");
		}	
}

