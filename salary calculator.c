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

//another example
#include<stdio.h>
int main(){
    float cost, discount, tax, final_cost;

    printf("Enter the cost of the item: ");
    scanf("%f", &cost);

    discount = 0.1 * cost; 
    tax = 0.18 * cost; 

    final_cost = cost - discount + tax;

    printf("Final cost after discount and tax: %.2f", final_cost);

    return 0;
}
