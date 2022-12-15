#include <stdio.h>
#include <stdlib.h>

//declaration of function
int get_user_input();

int main(){
    printf("How many numbers do you want to enter: ");
    //declaring variable input (Length of array) and array arr
    int input = get_user_input();
    int arr[input];

    //for loop input times
    for (int i = 0; i<input;i++){
    printf("Vnesi stevilo %i: ", i+1);
        //gets user input for the random numbers
        int in = get_user_input();
        arr[i] = in;
    }
    //for loop input times
    for (int i = 0; i<input;i++){
        printf("%i ", arr[i]);
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