#include<stdio.h>
struct std_info
{
	char id[20];char age[5];char name[50];char str[50];char city[20];char ctry[50];
};
int main()
{
    int n,i=0;
    printf("Enter the number of students. ");
	scanf("%d",&n);
	struct std_info std[n];	
while(i<n)
	{
		printf("\nEnter name of student(%d): ",i+1);
		scanf("%s",&std[i].name);
		printf("Enter Id of student(%d): ",i+1);
		scanf("%s",&std[i].id);
		printf("Enter age of student(%d): ",i+1);
		scanf("%s",&std[i].age);
		printf("Enter street No.of student(%d): ",i+1);
		scanf("%s",&std[i].str);
		printf("Enter city of student(%d): ",i+1);
		scanf("%s",&std[i].city);
		printf("Enter country of student(%d): ",i+1);
		scanf("%s",&std[i].ctry);
		i++;
	}
	i=0;	
while(i<n)
	{
		printf("\n___Information Of Student %d___",i+1);
		printf("\nName: %s",std[i].name);
		printf("\nStudent ID: %s",std[i].id);
		printf("\nAge: %s",std[i].age);
		printf("\nStreet: %s",std[i].str);
		printf("\nCity: %s",std[i].city);
		printf("\nCountry: %s\n",std[i].ctry);
		
		i++;
	}
}
