#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	int N,c ;
	printf("Enter length of your full name: ");
	scanf("%d", &N);
	
	char *name;
	name = (char *)calloc(N + 1, sizeof(char));
	
	printf("Enter your full name: ");
	while ((c = getchar()) != '\n' && c != EOF)
	{
	}
	fgets(name, N + 1, stdin);
	printf("Full name: %s", name);
	
	char temp[16];
	strcpy(temp, name);
	name = (char *)realloc(name, N + 8);
	while ((c = getchar()) != '\n' && c != EOF)
	{
	}
	system("cls");
	printf("Enter roll number: ");
	fgets(name, 7, stdin);
	strcat(name, " ");
	strcat(name, temp);
	printf("Roll No. with Name: %s", name);
	
	free(name);

	return 0;
}
