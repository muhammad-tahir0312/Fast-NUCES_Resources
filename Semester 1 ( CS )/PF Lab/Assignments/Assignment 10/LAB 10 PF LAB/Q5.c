#include <stdio.h>
struct complex
{
   float real, imag;
}a, b, c;
   struct complex read();
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   struct complex mul(struct complex, struct complex);

int main ()
{
   printf("\t\tEnter the First complex number: \n");
   a = read();
   write(a);
   printf("\t\t\nEnter  the Second complex number: \n");
   b = read();
   write(b);
   printf("\nAddition:");
   c = add(a, b);
   write(c);
   printf("\nMultiplication:");
   c = mul(a, b);
   write(c);
}
struct complex read()
{
   struct complex Q;
   printf("\nEnter the real part:\n");
   scanf("%f", &Q.real);
   printf("\nEnter the imaginary part:\n");
   scanf("%f", &Q.imag);
   return Q;
}
void write(struct complex a)
{
   printf("\t\nComplex number :\n");
   printf("\t%.1f + %.1fi", a.real, a.imag);
   printf("\n");
}
struct complex add(struct complex x, struct complex y)
{
   struct complex Q;
   Q.real = (x.real + y.real);
   Q.imag = (x.imag + y.imag);
   return Q;
}
struct complex mul(struct complex x, struct complex y)
{
   struct complex Q;
   Q.real=(x.real * y.real);
   Q.imag=(x.imag * y.imag);
   
   Q.real=(x.real * y.real) - (x.imag * y.imag);
   Q.imag=(x.real* y.imag) + (x.imag * y.real);
   return Q;
}

