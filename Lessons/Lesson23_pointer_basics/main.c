#include <stdio.h>

int main(){
    printf("VARIABLE \t VALUE\n");
    //Declaring variable number
    int number = 10;
    //Printing value of number
    printf("number      \t %i \n", number);
    //Printing adress of number by using pointer
    printf("&number      \t %p \n", &number);

    //Declaring pointer variable with adress of number
    int* p_number = &number;
    //Printing adress of pointer p_number
    printf("p_number       \t %p \n", p_number);
    //Printing value of variable number
    printf("*p_number \t %i \n", *p_number);
}