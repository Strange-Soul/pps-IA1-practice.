#include<stdio.h>

struct _complex
{
  float real,imaginary;
};

typedef struct _complex Complex;

int get_n()
{
 int n;
 printf("Enter a size of array \n");
 scanf("%d",&n);
 return n;
}
Complex input_complex()
{
 Complex z;
 printf("Enter any Complex Number \n");
 scanf("%f %f",&z.real,&z.imaginary);
 return z;
}
void input_n_complex(int n,Complex c[n])
{
 printf("Enter Complex aray Element \n");
 for(int i=0;i<n;i++)
 scanf("%f %f",&c[i].real,&c[i].imaginary);
}
Complex add(Complex a,Complex b)
{
 Complex c;
 c.real=a.real+b.real;
 c.imaginary=a.imaginary+b.imaginary;
}
Complex add_n_complex(int n,Complex c[n])
{
 Complex result={0,0};
 for(int i=0;i<n;i++)
 {
   result.real+=c[i].real;
   result.imaginary+=c[i].imaginary;
 }
 return result;
}
void output(int n,Complex c[n],Complex result)
{
 for(int i=0;i<n;i++)
 {
   printf("%f+%fi \n",c[i].real,c[i].imaginary);
 }
 printf("%f+%fi \n",result.real,result.imaginary);
}
int main()
{
 int x;
 x=get_n();
 Complex p,r,s;
 Complex q[x];
 input_n_complex(x,q);
 s=add_n_complex(x,q);
 output(x,q,s);
 return 0;
}