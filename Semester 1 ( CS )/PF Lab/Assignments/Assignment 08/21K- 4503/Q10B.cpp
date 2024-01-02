#include<stdio.h>
main()
{
	int n;
	printf("Enter Range: ");
	scanf("%d",&n);
	printf("\n\n");
	for(int i=1; i<=n; i++)
		{	
			for(int k=4; k>=1; k--)
				{
					if(i<=5-k)
						printf(" ");
				}
			for(int j=1; j<=n; j++)
				{
					if(i==1 || j==1 || i==5 || j==5)
						{
							printf("*");
						}
					else
						{
							printf(" ");
						}
				}
			printf("\n");
		}	
}
