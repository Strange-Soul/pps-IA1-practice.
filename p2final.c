#include<stdio.h>
int input()
{
 int n;
 printf("Enter a Number \n");
 scanf("%d",&n);
 return n;
}
int cmp(int a,int b,int c,int largest)
{
 if(a>b && a>c)
 {
   largest =a;
   return a;
 }
 else if(b>a && b>c)
 {
   largest = b;
   return b;
 }
 else
 {
   largest = c;
   return c;
 }
}
void output(int a,int b,int c,int largest)
{
 printf("Largest number among %d ,%d ,%d is %d \n",a,b,c,largest);
}
int main()
{
 int x,y,z,l;
 x=input();
 y=input();
 z=input();
 l=cmp(x,y,z,l);
 output(x,y,x,l);
 return 0;
}