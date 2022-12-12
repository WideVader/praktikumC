#include <stdio.h>

int* max(int* a, int* b);

int main(){
    //Declaring variables num1 and num2
    int num1 = 10;
    int num2 = 30;
    //Printinf values of num1 and num2
    printf("[main] num1: %i\n", num1);
    printf("[main] num2: %i\n", num2);
    //Printing adresses of num1 and num2
    printf("[main] &num1: %p\n", &num1);
    printf("[main] &num2: %p\n", &num2);

    //Assigning pointer bigger result of function max
    int* bigger = max(&num1, &num2);
    printf("[main] bigger: %p\n", bigger);
    printf("[main] *bigger: %i\n", *bigger);
}

int* max(int* a, int* b){
    //Printing adresses of a and b
    printf("[max] a: %p\n", a);
    printf("[max] b: %p\n", b);
    //Checking if pointer a or pointer b is bigger
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}







//This is to show how getting bigger value works

// int max(int a, int b);

// int main(){
//     int num1 = 10;
//     int num2 = 30;
//     int bigger = max(num1,num2);
//     printf("Bigger: %i\n", bigger);
//     num2 = 3;
//     printf("Bigger: %i\n", bigger);
// }

// int max(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }