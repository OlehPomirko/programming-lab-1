#include<stdio.h>
#include<math.h>
int main(void)
{
double a=1000;
double b=0.0001;
float r=1000;
float g=0.0001;
double h=a+b;
float j=r+g;
double c=((pow(h,3)-(pow(a,3)+3*a*a*b)))/(3*a*b*b+pow(b,3));
float n=((pow (j,3)-(pow(r,3)+3*r*r*g)))/(3*r*g*g+pow(g,3));
printf("double= %f\n",c);
printf(" float= %f\n",n);
return 0;
}