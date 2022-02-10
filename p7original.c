#include<stdio.h>

struct _complex
{
 float real,imaginary;
};

typedef struct _complex Complex;

Complex input_complex()
{
 Complex z;
 printf("Enter a Complex Number Do u Want to Add\n");
 scanf("%f %f",&z.real,&z.imaginary);
 return z;
}
Complex add(Complex a,Complex b)
{
Complex s;
s.real=a.real+b.real;
s.imaginary=a.imaginary+b.imaginary;
return s;
}
void output(Complex a,Complex b,Complex c)
{
 printf("(%f+%fi) + (%f+%fi) is (%f+%fi) \n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
 Complex x,y,z;
 x=input_complex();
 y=input_complex();
 z=add(x,y);
 output(x,y,z);
 return 0;
}

