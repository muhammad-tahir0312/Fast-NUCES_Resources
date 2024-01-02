#include<stdio.h>

struct phnr{
		int area;
		int exchange;
		int number;		
};
	
int main()
{
	struct phnr phnr1 = {212,767,8900};
    struct phnr phnr2;
	printf("Enter area: \nExchange: \nNumber: \n");
	scanf("\n%d %d %d",&phnr2.area,&phnr2.exchange,&phnr2.number);
	
	printf("\nMy number is: (%d) %d-%d",phnr1.area,phnr1.exchange,phnr1.number);
	printf("\nYour number is: (%d) %d-%d",phnr2.area,phnr2.exchange,phnr2.number);
}


