#include<stdio.h>
int main(void)
{
float m,n,a,b,c;
printf("m:");
scanf("%f",&m);
printf("n:");
scanf("%f",&n);
a = n-- - m;
c = n++ > m;
b = m-- < n;
printf("1. %.0f\n",a);
printf("2. %.0f\n",b);
printf("3. %.0f\n",c);
return 0;
}