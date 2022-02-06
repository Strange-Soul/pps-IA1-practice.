#include<stdio.h>
#include<math.h>
float input()
{
 float n;
 printf("Enter a Number to Find Sqare Root \n");
 scanf("%f",&n);
 return n;
}
float my_sqrt(float n)
{
 float x=n/2;
 float sqrt;
 sqrt=0.5*(x+(n/x));
 while(fabs( x - sqrt)>0.000001)
 {
   x=sqrt;
   sqrt =0.5*(x+(n/x));
 }
 return sqrt;
}
void output( float n,float sqrt_result)
{
 printf("Sqare Root of %f is %f \n",n,sqrt_result);
}
int main()
{
  float x,result;
  x=input();
  result=my_sqrt(x);
  output(x,result);
  return 0;
}