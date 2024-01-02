/*

	//////// A /////////	
 main( ){
 int i = 4, j = -1, k = 0, w, x, y, z ;
 w = i || j || k ;  
 x = i && j && k ;	{ NO SYNTAX ERROR }
 y = i || j && k ;
 z = i && j || k ;
 printf ( "\nw = %d x = %d y = %d z = %d", w, x, y, z ) ;}

ANSWER: w = 1   x = 0   y = 1   z = 1 

Explaination: we are not checking any condition so 'OR' operator only return 'True' and 'AND' operaor False.
And we can clearly observe how 'OR(||)' and 'AND(&&)' operators are working.

IN W ; 'OR' operator is returning answer 1 which is 'TRUE'. 
IN X ; 'AND' operator is returning 0 which is 'FALSE'.
IN Y ; both 'AND' , 'OR' operators are in a statement but 'OR' operator returning 1(TRUE).
IN Z ; again both 'AND' , 'OR' operators are in a statement but 'OR' operator returning 1(TRUE). 
   

	//////// B /////////
 main(){
 int i = 2, j = 3, k, l ;
 float a, b ;
 k = i / j * j ;
 l = j / i * i ;	{ NO SYNTAX ERROR }
 a = i / j * j ;
 b = j / i * i ;
 printf( "%d %d %f %f", k, l, a, b ); }

ANSWER: 0  2  0.000000  2.000000

Explaination: we are obtaining answers in 'DECIMAL NUMBERS' when we have used { %d }
              and in 'REAL NUMBERS' when we have used { %f }.
              
        >> %f displayes 7 digits of precision.
   
   
	//////// C /////////
 main( ){
 m = -3%2!=!3 ;			{ THIS IS LOGICAL ERROR }
 n = -3*10.5/2 - 3 ;                    
 printf ( "a = %d\nb = %f", m, n ) ;} 	> we are using WRONG IDENTIFIER for "n". 
										> "n" is decleared as "int" above. 

ANSWER: a = 1  b = 0.000000 

Explaination:	we are obtaining value of "m (a)" in 'DECIMAL NUMBER' when we have used { %d }
              	and value of "n (b)" in  'REAL NUMBERS' when we have used { %f }.

		>>> if you need value of "n (b)" in decimaal form then use %d instead of %f.
				
				
				
				
				
				
				
				
				
				
				

*/
