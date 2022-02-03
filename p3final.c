#include<stdio.h>
int input()
{
 int n;
 printf("Enter a Number to Add \n");
 scanf("%d",&n);
 return n;
}
int sum_n(int n)
{
int i,sum=0;
for(i=1;i<=n;i++)
{
 sum+=i;
}
return sum;
}
void output(int n,int sum)
{
 for(int i=1;i<=n;i++)
 {
 printf("%d+",i);
 }
 printf("\bis %d \n",sum);
 }
int main()
{
 int x,y;
 x=input();
 y=sum_n(x);
 output(x,y);
 return 0;
}