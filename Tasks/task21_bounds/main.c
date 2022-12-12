#include <stdio.h>

//Declaration of function
void bounds(int array[], int length, int* a, int*b);

int main(){
    //Declaring variables array with 7 elements, array_length with length of array, empty a and b variables
    int array[] = {-120,2,3,4,5,6,75};
    int array_length = 7;
    int a;
    int b;

    //Calling function bounds
    bounds(array,array_length,&a,&b);
    printf("min: %i     \t max: %i\n", a,b);
}

//Initialization of function
void bounds(int array[], int length, int* a, int*b){

    //Setting value for variables min and max to be first element of the array
    int min = array[0];
    int max = array[0];

    //Going through the array by its length
    for (int i = 0; i < length; i++)
    {
        //Cheking for minimum and maximum value and setting them in variables
        if(array[i]<min){
            min = array[i];
        }
        if(array[i]>max){
            max = array[i];
        }
    }
    //Setting min and max values in pointers a and b
    *a = min;
    *b = max;
}

