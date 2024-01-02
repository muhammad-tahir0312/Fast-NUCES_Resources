#include<stdio.h>
#include<string.h>

void find_rollno(char **, float [], int []);
void find_name(char **, float [], int []);
int *sort(float [], char **, int []);
int i,j;

main()
{
	int choice, no, *sorted;
	
	char *name[7] = {"Salman", "Zubair", "Ahsan" , "Farah", "Hassan", "Kamran", "Mariyum"};
	float marks[7] = {75.5, 80, 64, 78, 65, 54, 60};
	int roll[7] = {1001, 1002, 1004, 1005, 1007, 1008, 1009};
	
	printf("1. Sort the data according to the marks obtained.\n");
	printf("2. Search and print the data based on a roll number.\n");
	printf("3. Search and print the data based on name.\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			{
				sorted = sort(marks, name, roll);
				for(i = 0; i < 7; i++)
					{
						printf("\n\n");
						printf("\tName: %s\n", *(name+i));
						printf("\tMarks: %.1f\n", marks[i]);
						printf("\tRoll no: %d\n", roll[i]);
					}
				break;				
			}
		case 2:
			{
				find_rollno(name, marks, roll);
				break;				
			}
		case 3:
			{
				find_name(name, marks, roll);
				break;				
			}
		default:
			printf("Invalid choice");
	}
	
//	return 0;
}

void find_rollno(char **name, float marks[7], int roll[7])
{
	int no, t;
	printf("Enter roll number: ");
	scanf("%d", &no);
	for(i = 0; i < 7; i++)
	{
		if(no == roll[i])
		{
			t = i;
		}
	}
	printf("Name: %s", *(name+t));
	printf("\nMarks: %.1f", marks[t]);
	printf("\nRoll: %d", roll[t]);
}

void find_name(char **name, float marks[7], int roll[7])
{
	int t;
	char choice[10];
	printf("Enter name: ");
	scanf("%s", choice);
	for(i = 0; i < 7; i++)
	{
		if(strcmp((*(name+t)), choice))
		{
			t = i;
		}
	}
	printf("Name: %s", *(name+t));
	printf("\nMarks: %.1f", marks[t]);
	printf("\nRoll: %d", roll[t]);
}

int *sort(float marks[], char **name, int roll[]) 
{
	int z = 7;
  	for (j = 0; j < z - 1; j++) 
	{
	    for (i = 0; i < z - j - 1; i++) 
			{     
		      	if (marks[i] > marks[i + 1]) 
					{
				        float te = marks[i];
				        marks[i] = marks[i + 1];
				        marks[i + 1] = te;
				        
				        char *t = *(name + i);
				        name [i]= name [1 + i];
				        name[i + 1] = t;
				        
				        int tem = roll[i];
				        roll[i] = roll[i + 1];
				        roll[i + 1] = tem;
			      	}
		    }
	  	}
 	return 0; 
}
