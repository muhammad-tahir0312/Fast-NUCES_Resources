#include<stdio.h>

void recruitment(int);
int main()
{
	int marks;
	
	printf("Enter your marks: ");
	scanf("%d", &marks);
	
if(marks >= 50)
	{
		recruitment(marks);
	}
	
else
	{
		printf("\nYou aren't recruited.\n");
	}
	
	return 0;
}

void recruitment(int numbers)
{
	int experience;
	
	printf("\nEnter your years of experience: ");
	scanf("%d", &experience);
	
	if(numbers >= 70 && experience >= 2)
	{
		printf("\nYou are selected as Associate Developer.\n");
	}
	
	else if(numbers >= 60 && experience >= 1)
	{
		printf("\nYou are selected as Assistant Developer.\n");
	}
	
	else
	{
		printf("\nYou are selected as Trainee Engineer.\n");
	}	
}
