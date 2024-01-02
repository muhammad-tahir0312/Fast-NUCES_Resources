#include<stdio.h>
#include<string.h>
main()
{
	int size;
    char text[50];
    
	printf("Enter Your Name: \n");
	gets(text);
	printf("\n\nYour name is: ");
	puts(text);
	size = strlen(text);
    
	printf("\nThere are %d words in the string.",wordcount(&text,size)+1);

	
}

int wordcount(char *text, int size)
{
	int i,count=0;
	
	for(i=0; i<size; i++)
		{
			if( 32 == *(text+i))	// 32 is the ASCII of SPACE
				{
					count++;
				}
		}
	return count;	
}
