#include <stdio.h>
main()
{
  int count; 
  
  printf(" Prime Number from 1 to 100 are: \n"); 
  for(int n= 2; n <= 100; n++)
  {
    count = 0;
    for (int i = 3; i <= n/2; i++)
    {
  	if(n%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && n != 1 )
    {
	printf(" %d ", n);
    }  
  }
}
