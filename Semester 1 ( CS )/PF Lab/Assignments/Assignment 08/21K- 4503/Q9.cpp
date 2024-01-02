#include <stdio.h>
main()
{
	int a[100] = { 0 }, i, x, pos, n;

	printf("Enter Size of Array: ");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++)
	{
		printf("Enter Elements: ");
		scanf("%d",&a[i]);
	}	

	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	printf("Enter the POSITION where you want to DELETE item.");
	scanf("%d",&pos);
	
	for(i=pos-1; i<n-1; i++)
		{
			a[i]=a[i+1];
		}	
	printf("\nFinal Array: ");
	for(i=0; i<=n-2; i++)
		{
			printf("\n%d",a[i]);
		}
}

