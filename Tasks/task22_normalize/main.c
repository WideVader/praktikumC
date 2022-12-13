#include <stdio.h>

//Declaration of functions
void bounds(int array[], int length, int *a, int *b);
void normalise(int nums[], double norm[], int length, int min, int max);

int main()
{
    //Declaring variables array with 7 elements, array_length with length of array, empty a and b variables
    int array[] = {1, 10, -120, 2, 3, 4, 5, 6, 42, 75};
    int array_length = 10;
    int min,max;

    //Get array length automatically
    // int array_length = sizeof(array)/sizeof(array[0]);

    int a;
    int b;

    double normalised[array_length];
    //Calling functions
    bounds(array,array_length,&a,&b);
    normalise(array, normalised, array_length, a, b);
    for (int i = 0; i < array_length; i++)
    {
        printf("%lf ", normalised[i]);
    }
    printf("\n");
    // printf("min: %i     \t max: %i\n", a, b);
}


void normalise(int nums[], double norm[], int length, int min, int max){
    if(min<0){
        for (int i = 0; i < length; i++)
        {
            nums[i] += -min;
        }
        max += -min;
    }
    for (int j = 0; j < length; j++)
    {
        norm[j] = (double) nums[j] / (double) max;
    }
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
