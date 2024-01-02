#include <stdio.h>
main()
{
	int arr[100] = { 0 }, i, x, pos, n;
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++)
	{
		printf("Enter Elements: ");
		scanf("%d",&arr[i]);
	}	

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("Enter the ELEMENT to be inserte: ");
	scanf("%d",&x);
	printf("Enter the POSITION: ");
	scanf("%d",&pos);
	n++;

	for (i = n-1; i >= pos-1; i--)
		arr[i] = arr[i - 1];
	arr[pos] = x;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

