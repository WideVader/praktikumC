#include <stdio.h>

//declaration of function
int get_user_input();
void count(int input);

int main(){
    //declaring variable input
    int input = get_user_input();
    //for loop 4 times
    for (int i = 0; i<4;i++){
        //calling function count with number that user inputed
        count(input);
        printf("\n");
    }
}

//count function with user inout
void count(int input){
    //for loop that goes from 1 to the number user inputed
    for (int j = 1; j<=input;j++){
        printf("%i ", j);
    }
}

int get_user_input(){
    //declaring variable
    int input;
    printf("Enter number: ");
    scanf("%i", &input);
    //returning input value
    return input;
}