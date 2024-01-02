#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,freq[123]={0},max=0;
	char course[50]={0};
	
	printf("Enter the Full Name of your course: \n");
	gets(course);
for(i=0;i<strlen(course);i++)
	{
		freq[(int)course[i]]++;
	}
for(i=0,j=1;j<123;j++)
	{
		if(freq[i] >= freq[j])
			{
				max=freq[i];	
			}
		else
			{
				max=freq[j];
				i=j;
			}
	}
printf("\n--------------------------------------\n");
for(i=0;i<123;i++)
	{
		if( freq[i] == max)
		{
			printf("'%c' has the highest occurance of %d.\n",i,max);
		}
	}
printf("--------------------------------------\n");	
}
