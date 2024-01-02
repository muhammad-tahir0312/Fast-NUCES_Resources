#include<stdio.h>

int main()
{
	int plot, i;
	float area[8], max = 0,
	len[8] = {150.6,354,172.23,73.33,415.15,415.15,415.15,415.15},
	width[8] = {126.9,451.51,75.65,77.17,116.17,116.17,116.17,116.17};
	printf("---------------------\n");
	printf("PLOT \t  AREA \n");
	printf("---------------------\n");
	for (i = 0; i <=7; i++)
	{
		area[i] = (len[i] * width[i]);
		
		printf("\n%d\t%.2f\n", i+1, area[i]);

		if (max < area[i])
		{
			max = area[i];
			plot = i + 1;
		}
	}
printf("\n-----------------------------------------------------------------------");
printf("\nPlot Number %d is the largest area with %.3f units squared.\n", plot, max);
printf("-----------------------------------------------------------------------");
	
}
