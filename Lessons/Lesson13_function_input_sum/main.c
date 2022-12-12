#include <stdio.h>

//declaration of function
int get_user_input();

int main(){
    //declaring variables
    int number_of_requests = 5;
    int sum = 0;
    //for loop goes 5 times by number_of_requests
    for (int i = 0; i<number_of_requests;i++){
        //adding user inputed value to sum
        sum = sum+get_user_input();
    }
    printf("Sum: %i\n", sum);

}

//initialization of function
int get_user_input(){
    //declaring variable
    int input;
    printf("Enter number: ");
    scanf("%i", &input);
    //returning input value
    return input;
}