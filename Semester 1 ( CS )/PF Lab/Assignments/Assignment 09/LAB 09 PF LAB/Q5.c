#include <stdio.h>

float volumeCalu(int, int);
void getData(int, int);

main()
{
	int a,h;
	
	printf("\nEnter value of a & h: ");
	scanf("%d %d", &a,&h);
	
	getData(a, h);	
	
}

float volumeCalu(int a, int h)
{
	float v;
	
	v = a * (float) a * h / 3;
	
	return v; 
}

void getData(int a, int h)
{
	float v;
	
	v = volumeCalu(a, h);
	
	printf("\nThe volume is %.2f.\n",v);
}
