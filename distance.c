#include<stdio.h>
int main()
{
float km,inch,cm,meter;
printf("enter the distance in km: ");
scanf("%f",&km);

meter = km * 1000;
inch = km * 39370.1;
cm = km * 100000;

printf("the distance in meter is %f\n",meter);
printf("the distance in inch is %f\n",inch);
printf("the distance in cm is %f\n",cm);

return 0;

}