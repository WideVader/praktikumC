#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaration of function
int get_user_input();

int main(){
    //Defining array of length 10
    int arr[10];
    //srand is a random number generator function which will randomize the number produced by rand function. 
    srand(time(NULL));
    for(int i =0; i<10;i++){
        //Generates random number between 0 and 10 000
        arr[i] = rand()%10000;
    }
    printf("[ ");
    //for loop from 0 to 9
    for(int i =0; i<10;i++){
        printf("%i ",arr[i]);
    }
    printf("]\n");
}