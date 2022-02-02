#include<stdio.h>
int input_array_size()
{
 int n;
 printf("Enter the size of array\n");
 scanf("%d",&n);
 return n;
}
void input_array(int n,int a[n])
{
printf("Enter array Element\n");
for(int i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
}
int sum_n_arrays(int n,int a[n])
{
 int i,sum=0;
 for(i=0;i<n;i++)
 {
   sum=sum+a[i];
 }
 return sum;
}
void out_put(int n,int a[n],int sum)
{
  int i;
  for( i=0;i<n;i++)
  {
    printf("%d+",a[i]);
  }
  printf("\bis %d\n",sum);
}
int main()
{
  int x,z;
  x=input_array_size();
  int y[x];
  input_array(x,y);
  z=sum_n_arrays(x,y);
  out_put(x,y,z);
  return 0;
}