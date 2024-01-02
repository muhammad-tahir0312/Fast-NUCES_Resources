#include<stdio.h>
int main()
{
    int matched;
    int arr1[5] , arr2[5], arr3[5],cout,k=0;
    
	for(int i=0; i<=4; i++)
		{
			printf("Enter Marks In 1st Array.\n");
    		scanf("%d",&arr1[i]);	
		} 		
	for(int i=0; i<=4; i++)
		{
			printf("Enter Marks In 2nd Array.\n");
    		scanf("%d",&arr2[i]);	
		} 
	for(int i=0; i<=5; i++)
		{
			for(int j=0; j<=5; j++)
			{
				if(arr1[i]== arr2[j])
          		    {
					    cout = 0;
         		        for(int x=0; x<k; x++)
         			        {
         			           if(arr1[i]==arr3[x])
         			               cout++;
         			        }
        		        if(cout==0)
         			        {
            			        arr3[k] = arr1[i];
            			        k++;
            			    }
           			}
       	 	}	
		}
    printf("\n Array Contains Common Elements from two given Array:\n");
    for(int i=0; i<k; i++)
        printf("%d ", arr3[i]);									
}
