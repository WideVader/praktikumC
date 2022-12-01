#include <stdio.h>

//Global constant 
const int MY_CONSTANT = 100;

int multiply_by_constant(int number);
int get_user_input();

int main(){
    //declaring variables
    int input = get_user_input();
    int num = multiply_by_constant(input);
    printf("Number: %i\n", num);
}

int multiply_by_constant(int number){
    //multiply entered number with MY_CONSTANT current 100
    int mult = number * MY_CONSTANT;
    return mult;
}

int get_user_input(){
    int input;
    printf("Enter number: ");
    scanf("%i", &input);
    return input;
}