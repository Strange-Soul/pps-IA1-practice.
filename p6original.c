#include<stdio.h>
void input_two_string(char *a,char *b)
{
 printf("Enter any Words \n");
 scanf("%s %s",a,b);
}
int strcmp(char *a,char *b)
{
 int i;
 for(i=0;a[i]!='\0' && a[i] ==b[i];i++);
 return (a[i]-b[i]);
}
void output(char *a,char *b,int result)
{
 if(result>0)
 printf("%s is Greater than %s",a,b);
 else if(result ==0)
 printf("%s is Equal to %s \n",a,b);
 else
 printf("%s is Greater than %s \n",b,a);
}
int main()
{
 char s1[20],s2[20];
 int r;
 input_two_string(s1,s2);
 r=strcmp(s1,s2);
 output(s1,s2,r);
 return 0;
}