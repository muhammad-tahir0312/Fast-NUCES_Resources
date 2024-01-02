#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int N,c ;
	printf("Enter length of your full name: ");
	scanf("%d", &N);
	
	char *string;
	string = (char *)calloc(N+ 1, sizeof(char));
	
	while ((c = getchar()) != '\n' && c != EOF) 
	{ 
	}
	
	printf("Enter your FULL NAME: ");
	fgets(string, N+ 1, stdin);
	printf("\nEntered Name: ");
	puts(string);
	free(string);
	
	return 0;	
}
