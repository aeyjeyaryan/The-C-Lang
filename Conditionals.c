//Basic example of if else in C
// #include<stdio.h>
// void main()
// {
// int age;
// printf("enter your age: ");
// scanf("%d",&age);

// if (age>18) {
//     printf("you are an adult \n");
//     printf("you can drive a vehicle!");
// }
// else {
//     printf("not adult \n");
// }

// return 0;
// }

//using the concept of else if in c
// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter you age: ");
//     scanf("%d",&age);

//     if (age==12) {
//         printf("You are about to enter your teenage \n");
//     }

//     else if (age<12){
//         printf("You must be in primary school rn! \n");
//     }
//     else if(age>12 && age<20){
//         printf("Wow! You are a teenager!");
//     }
//     else {
//     printf("Not valid age");
//     }
// }

//Nested if
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter number: ");
//     scanf("%d", &num);

//     if (num>=0) {
//         printf("positive \n");
//         if (num>2) {
//             printf("number is greater than 2");
//         }
//     }
//     else{
//         printf("none of my business");
//     }
// }

//ternary operators
// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter you age: ");
//     scanf("%d",&age);
//     age >= 18 ? printf("adult \n") : printf("not adult \n") ;
// }    
//Switch case
// #include<stdio.h>
// int main()
// {
//     int day;
//     printf("enter day (1-7): ");
//     scanf("%d",&day);


//     switch (day){
//         case 1: printf("sunday \n");
//                 break;
//         case 2: printf("monday \n");
//                 break;
//         case 3: printf("tuesday \n");
//                 break;
//         case 4: printf("wednesday \n");
//                 break;
//         case 5: printf("thursday \n");
//                 break;
//         case 6: printf("friday \n");
//                 break;
//         case 7: printf("saturday \n");
//                 break;
//         default:
//         printf("not a valid day bruh!");

//         return 0;   
//     }
// }    

//nested switch

#include <stdio.h>

int main() {
    int choice1, choice2;

    printf("Choose option 1 (1-3): ");
    scanf("%d", &choice1);

    printf("Choose option 2 (1-3): ");
    scanf("%d", &choice2);

    switch (choice1) {
        case 1:
            switch (choice2) {
                case 1:
                    printf("You chose 1 - 1\n");
                    break;
                case 2:
                    printf("You chose 1 - 2\n");
                    break;
                case 3:
                    printf("You chose 1 - 3\n");
                    break;
                default:
                    printf("Invalid choice for option 2\n");
                    break;
            }
            break;
        case 2:
            switch (choice2) {
                case 1:
                    printf("You chose 2 - 1\n");
                    break;
                case 2:
                    printf("You chose 2 - 2\n");
                    break;
                case 3:
                    printf("You chose 2 - 3\n");
                    break;
                default:
                    printf("Invalid choice for option 2\n");
                    break;
            }
            break;
        case 3:
            switch (choice2) {
                case 1:
                    printf("You chose 3 - 1\n");
                    break;
                case 2:
                    printf("You chose 3 - 2\n");
                    break;
                case 3:
                    printf("You chose 3 - 3\n");
                    break;
                default:
                    printf("Invalid choice for option 2\n");
                    break;
            }
            break;
        default:
            printf("Invalid choice for option 1\n");
            break;
    }

    return 0;
}
