#include <stdio.h>

int main(){
    //Array with added values 1,2,3,4,5
    //int array[] = {1,2,3,4,5};

    //Array with set size
    int array[5];

    //Adding value to elements in the array
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    //Printing out all array values
    for(int i = 0; i<5;i++){
        printf("Number on index %i: %i\n", i, array[i]);
    }
}