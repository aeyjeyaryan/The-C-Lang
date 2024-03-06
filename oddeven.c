#include <stdio.h>
int main()
{
int n;
printf("enter the n: ");
scanf("%d",&n);
if(n==0)
{
printf("invalid");
}
if (n%2==0)
{
printf("even");
}
else
{printf("odd");

}

}
// USING TERNARY OPERATOR
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    (n == 0) ? printf("Invalid") : (n % 2 == 0) ? printf("Even") : printf("Odd");
    return 0;
}
