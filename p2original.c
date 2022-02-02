#include<stdio.h>
int input()
{
 int n;
 printf("Enter a Number U wish to Add \n");
 scanf("%d",&n);
 return n;
}
int cmp(int a,int b,int c,int largest)
{
 if(a>b && a>c)
 {
   largest=a;
   return a;
 }
 else if(b>a && b>c)
 {
   largest=b;
   return b;
 }
 else
 {
  largest =c;
  return c;
 }
}
void output(int a,int b,int c,int largest)
{
  printf("Largest among %d,%d,%d is %d \n",a,c,b,largest);
}
int main()
{
  int x,y,z,largest;
  x=input();  //fun call
  y=input();  //fun call 
  z=input(); // fum call
  largest=cmp(x,y,z,largest);
  output(x,y,z,largest);
  return 0;
}