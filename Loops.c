// LOOPS PART 2
// DO WHILE
// #include <stdio.h>
// int main(){
//  int i = 1;
//  do{
//     printf("%d\n",i);
//     i++;
//  } while (i<=5);
//  return 0; 
// }
 // print the sum of first n natural numbers
 // also print them in reverse
#include <stdio.h>
int main()
{
    int n = 5;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("%d\n",sum);
    for (int i=n; i>=1; i--){
        printf("%d\n",i);
    }
    return 0;
}    

// print factorial of a number
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("%d" ,factorial);
    return 0;
}

     