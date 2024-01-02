#include<stdio.h>
int main()
{
	int no,I=1,V=5,X=10,L=50,C=100,D=500,M=1000;	// declearing & initializing INT type variables
	char char1,char2,char3;		// declearing CHAR type variables
	
	
	printf("How many Characters are There In Your Roman NUMERAL: ");
	scanf("%d",&no);	// Asking for the total number of Roman NUMERAL.
	
switch(no)	// Using SWITCH CASE to check for the total number of Roman NUMERAL.
{
	case 1: // if user enter only 1 number of Roman NUMERAL.
	{
	printf("Enter The Character:");	// Taking 1 Roman NUMERAL.
	scanf("%c",&char1);
		
	switch(char1)
	{
		case'I':
		    printf("Decimal Equivalent is 1");
		    break;
		case'V':
		    printf("Decimal Equivalent is 5");
		    break;
		case'X':
		    printf("Decimal Equivalent is 10");
		    break;
		case'L':
		    printf("Decimal Equivalent is 50");
		    break;
		case'C':
		    printf("Decimal Equivalent is 100");
		    break;	
		case'D':
		    printf("Decimal Equivalent is 500");
		    break;
		case'M':
		    printf("Decimal Equivalent is 1000");
		    break;
		default:
		    printf("wrong Roman Number");
		    break;
	}
		break;
	}
	case 2:		//if user enter only 2 number of Roman NUMERAL.
	{
		printf("Enter The first Character: ");	// Taking 1st Roman NUMERAL.
	    scanf(" %c",&char2);
	    printf("Enter The Second Character: ");	// Taking 2nd Roman NUMERAL.
		scanf(" %c",&char3);
	
		switch(char2)
		{				//	{ USING NESTED SWITCH }
		case 'I':
		    switch(char3){
		    	case'I':
		    	   	printf("Decimal Equivalent is %d",I+I);
		    	    break;
		    	case'V':
		    	    printf("Decimal Equivalent is %d",V-I);
		    	    break;
		    	case 'X':
		    	    printf("Decimal Equivalent is %d",X-I);
		    	    break;
		    	case 'L':
					printf("Decimal Equivalent is %d",L-I);
		    	    break;
				case 'C':
					printf("Decimal Equivalent is %d",C-I);
		    	    break; 	  
	            case 'D':
					printf("Decimal Equivalent is %d",D-I);
		    	    break; 
		    	case 'M':
					printf("Decimal Equivalent is %d",M-I);
		    	    break; 
		    	default:
		    	    printf("This Roman Number Does Not Exist");
				   }
		break;
		
		case 'V':
			switch(char3){
				case'I':
		    	   	printf("Decimal Equivalent is %d",V+I);
		    	    break;
		    	case'V':
		    	    printf("Decimal Equivalent is %d",V+V);
		    	    break;
		    	case 'X':
		    	    printf("Decimal Equivalent is %d",X-V);
		    	    break;
		    	case 'L':
					printf("Decimal Equivalent is %d",L-V);
		    	    break;
				case 'C':
					printf("Decimal Equivalent is %d",C-V);
		    	    break; 	  
	            case 'D':
					printf("Decimal Equivalent is %d",D-V);
		    	    break; 
		    	case 'M':
					printf("Decimal Equivalent is %d",M-V);
		    	    break; 
		    	default:
		    	    printf("This Roman Number Does Not Exist");
				}
		break;
		
		case 'X':
			switch(char3){
				case'I':
		    	   	printf("Decimal Equivalent is %d",X+I);
		    	    break;
		    	case'V':
		    	    printf("Decimal Equivalent is %d",X+V);
		    	    break;
		    	case 'X':
		    	    printf("Decimal Equivalent is %d",X+X);
		    	    break;
		    	case 'L':
					printf("Decimal Equivalent is %d",L-X);
		    	    break;
				case 'C':
					printf("Decimal Equivalent is %d",C-X);
		    	    break; 	  
	            case 'D':
					printf("Decimal Equivalent is %d",D-X);
		    	    break; 
		    	case 'M':
					printf("Decimal Equivalent is %d",M-X);
		    	    break; 
		    	default:
		    	    printf("This Roman Number Does Not Exist");	
				}
		break;  
		   	
		case 'L':
			switch(char3){
				case'I':
		    	   	printf("Decimal Equivalent is %d",L+I);
		    	    break;
		    	case'V':
		    	    printf("Decimal Equivalent is %d",L+V);
		    	    break;
		    	case 'X':
		    	    printf("Decimal Equivalent is %d",L+X);
		    	    break;
		    	case 'L':
					printf("Decimal Equivalent is %d",L+L);
		    	    break;
				case 'C':
					printf("Decimal Equivalent is %d",C-L);
		    	    break; 	  
	            case 'D':
					printf("Decimal Equivalent is %d",D-L);
		    	    break; 
		    	case 'M':
					printf("Decimal Equivalent is %d",M-L);
		    	    break; 
		    	default:
		    	    printf("This Roman Number Does Not Exist");;	
				}
		break;
		
		case 'C':
			switch(char3){
				case'I':
		    	   	printf("Decimal Equivalent is %d",C+I);
		    	    break;
		    	case'V':
		    	    printf("Decimal Equivalent is %d",C+V);
		    	    break;
		    	case 'X':
		    	    printf("Decimal Equivalent is %d",X+C);
		    	    break;
		    	case 'L':
					printf("Decimal Equivalent is %d",L+C);
		    	    break;
				case 'C':
					printf("Decimal Equivalent is %d",C+C);
		    	    break; 	  
	            case 'D':
					printf("Decimal Equivalent is %d",D-C);
		    	    break; 
		    	case 'M':
					printf("Decimal Equivalent is %d",M-C);
		    	    break; 
		    	default:
		    	    printf("This Roman Number Does Not Exist");	
				}
		break;
		
		case 'D':
			switch(char3){
				case'I':
		    	   	printf("Decimal Equivalent is %d",D+I);
		    	    break;
		    	case'V':
		    	    printf("Decimal Equivalent is %d",D+V);
		    	    break;
		    	case 'X':
		    	    printf("Decimal Equivalent is %d",D+X);
		    	    break;
		    	case 'L':
					printf("Decimal Equivalent is %d",D+L);
		    	    break;
				case 'C':
					printf("Decimal Equivalent is %d",D+C);
		    	    break; 	  
	            case 'D':
					printf("Decimal Equivalent is %d",D+D);
		    	    break; 
		    	case 'M':
					printf("Decimal Equivalent is %d",M-D);
		    	    break; 
		    	default:
		    	    printf("This Roman Number Does Not Exist");	
				}
		break;
		
		case 'M':
			switch(char3){
				case'I':
		    	   	printf("Decimal Equivalent is %d",M+I);
		    	    break;
		    	case'V':
		    	    printf("Decimal Equivalent is %d",V+M);
		    	    break;
		    	case 'X':
		    	    printf("Decimal Equivalent is %d",X+M);
		    	    break;
		    	case 'L':
					printf("Decimal Equivalent is %d",L+M);
		    	    break;
				case 'C':
					printf("Decimal Equivalent is %d",C+M);
		    	    break; 	  
	            case 'D':
					printf("Decimal Equivalent is %d",D+M);
		    	    break; 
		    	case 'M':
				    printf("Decimal Equivalent is %d",M+M);
		    	    break; 
		    	default:
		    	    printf("This Roman Number Does Not Exist");	
				}
		default:
			printf("This Roman Number Does Not Exist");
		}				
	break;	
	}	
	default:
	{
		printf("Invalid Input, Number is out of range, Pls Select Number Again.");
	}	 	
}
}
