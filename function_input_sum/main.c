#include <stdio.h>

int get_user_input();

int main(){
    int number_of_requests = 5;
    int sum = 0;
    for (int i = 0; i<number_of_requests;i++){
        sum = sum+get_user_input();
    }
    printf("Sum: %i\n", sum);

}

int get_user_input(){
    int input;
    printf("Enter number: ");
    scanf("%i", &input);
    return input;
}