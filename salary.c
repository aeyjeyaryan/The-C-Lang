#include<stdio.h>
int main(){
float salary,incentive,gst;
float incentive1,salary_1;

printf("enter the salary: ");
scanf("%f",&salary);

//salary = 60000;
incentive = 5000;
gst = 18.00;

incentive1 = 5000-0.18*5000;

salary_1 = salary + incentive1;

printf("%f",salary_1);


return 0;
}