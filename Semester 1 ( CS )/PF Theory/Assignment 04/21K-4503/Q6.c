#include<stdio.h>
#include<math.h>
int main()
{
	double a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
	double b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
	double angle[6]={0.78,0.89,1.3,9.00,1.25,1.75};
	double area[6]={0};
	
	int i;
	double x,t,m;
		
	printf(" No.\tPlot No.\t   A\t\t  B \n");
	for(i=0; i<6; i++)
		{
			printf(" %d\t%.3lf\t\t%.3lf\t\t%.3lf",i+1,a[i],b[i],angle[i]);	
			printf("\n");		
		}
		
	printf("\n\n");	
		
	for(i=0; i<6; i++)
		{	
			x = 0.5*(a[i]*b[i]);
			area[i] = x * sin(angle[i]);			
		}
	printf(" No.\t     Area\n");
	for(i=0; i<6; i++)
		{
			printf(" %d\t   %.3lf",i+1,area[i]);	
			printf("\n");		
		}
	int q;
	for(i=1,q=0; i<6; i++)
		{
			m = area[0];
			if (m < area[i]) 
				{
			    	m = area[i];
			    	q = i;
			    }			
		}
	printf("\n\tPlot No. %d has Maximum Area of %.3lf",(q+1),m);	
	
	return 0;
}
