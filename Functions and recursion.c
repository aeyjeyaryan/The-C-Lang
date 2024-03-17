#include <stdio.h>

// Function declaration
void greet();

int main() {
    // Function call
    greet();

    return 0;
}

// Function definition
void greet() {
    printf("Hello, world!\n");
}

// addition function 
#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int num1 = 5, num2 = 10;
    
    // Function call
    int sum = add(num1, num2);
    
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
// multiplication functions
#include <stdio.h>

int multiply(int a, int b);

int main() {
    int num1 = 5, num2 = 10;
    
    // Function call
    int product = multiply(num1, num2);
    
    printf("The product of %d and %d is %d\n", num1, num2, product);

    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
