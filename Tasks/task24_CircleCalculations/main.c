#include <stdio.h>
#include <stdlib.h>
//Defining PI with value of 3.142857
#define PI 3.142857

//declaration of function
int get_user_input();

int main(){
    printf("Enter circle radius: ");
    //Getting user input value stored in input
    int input = get_user_input();
    //Calculating Circumference of a circle
    double cir = (double)input * 2 * PI;
    //Calculating the area of a circle
    double plo = (double)input * (double)input * PI;
    printf("Circumference: %lf\n",cir);
    printf("Area: %lf\n",plo);
}

//Initialization of function
int get_user_input(){
    //declaring variable
    int input;
    
    scanf("%i", &input);
    //returning input value
    return input;
}