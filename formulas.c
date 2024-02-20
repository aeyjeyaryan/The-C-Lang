#include<stdio.h>
int main()
{
float a,b,c,q,r,m,Z,X;    
a = 5.0;
b= 6.0;
q = 1.0;
r = 2.0;
m = 3.0;
c = 8.0;


Z = (8.8*(a+b)*2/c-0.5+2*a/(q+r))/(a+b)*(1/m);

X = (-b+b*(b*b)+2*4*a*c)/(2*a);

printf("%f \n",X);

printf("%f",Z);
return 0;


}