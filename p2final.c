#include<stdio.h>
int input()
{
 int n;
 printf("Enter a Number \n");
 scanf("%d",&n);
 return n;
}
int cmp(int a,int b,int c)
{
 if(a>b && a>c)
 {
   return a;
 }
 else if(b>a && b>c)
 {
   return b;
 }
 else
 {
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
 l=cmp(x,y,z);
 output(x,y,z,l);
 return 0;
}