#include <stdio.h>

//Declaration of function
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
    //Calling function bounds
    normalise(array, normalised, array_length, -120, 75);
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