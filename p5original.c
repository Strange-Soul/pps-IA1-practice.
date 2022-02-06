#include<stdio.h>
#include<math.h>
float input()
{
 float n;
 printf("Enter a Number to Find Square Root \n");
 scanf("%f",&n);
 return n;
}
float my_sqrt(float n)
{
 float x=n/2;
 float sqrt;
 sqrt=0.5*(x+(n/x));
 while(fabs (x - sqrt)>0.00001)
 {
   x=sqrt;
   sqrt=0.5*(x+(n/x));
 }
 return sqrt;
}
void output(float n,float sqrt_result)
{
 printf("Sqare Root of %f is %f \n",n,sqrt_result);
}
int main()
{
 float x,y;
 x=input();
 y=my_sqrt(x);
 output(x,y);
 return 0;
}