#include<stdio.h>
int main()
{
	int i, j;
	float student[5][9], percentage = 0, sum[5];
	int total = 500;
	
	for(i = 0; i < 5; i++)
	{
		sum[i] = 0;
		
		for(j = 0; j < 9; j++)
		{
			if(j == 0)
			{
				printf("\nEnter student id: ");
				scanf("%f", &student[i][j]);
			}
			
			else if(j >= 1 && j <= 5)
			{
				printf("\nEnter course %d marks: ",j);
				scanf("%f", &student[i][j]);
				
				sum[i] += student[i][j];
			}
			
			else if(j == 6)
			{
				student[i][j] = sum[i];
			}
			
			else if(j == 7)
			{
				student[i][j] = total;
			}
			
			else
			{
				student[i][j] = sum[i] * 100 / total;
			}
		}
	}	
	printf("\n***STUDENT MARKSHEET****\n\n");
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 9; j++)
		{
			printf("%.1f\t" , student[i][j]);
		}
		
		printf("\n\n");
	}
	
	return 1;
}
