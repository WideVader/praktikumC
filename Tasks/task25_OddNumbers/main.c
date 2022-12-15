#include <stdio.h>
#include <stdlib.h>
//Defining PI with value of 3.142857
#define PI 3.142857

//declaration of function
int get_user_input();

int main(){
    printf("Enter number: ");
    //Getting user input value stored in input
    int input = get_user_input();
    //for loop from 0 to input value
    for(int i = 0; i<input;i++){
        //Checking if number is odd
        if(i%2 != 0)
        printf("%i ", i);
    }
    printf("\n");
}

//Initialization of function
int get_user_input(){
    //declaring variable
    int input;
    
    scanf("%i", &input);
    //returning input value
    return input;
}