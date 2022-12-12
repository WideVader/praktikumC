#include <stdio.h>

int main(){
    //Array with added values 1,2,3,4,5,6,7,8,9
    int array[] = {1,2,3,4,5,6,7,8,9};

    //Built in sizeof gets the size of array in memory length
    int size_of_numbers = sizeof(array);
    printf("Size of array in memory: %i\n", size_of_numbers);

    //Built in sizeof gets the size of an element in memory length
    int size_of_element = sizeof(array[0]);
    printf("Size of element: %i\n", size_of_element);

    //Divide the memory size of the array with size of one lement to get size of array
    int length_of_numbers = size_of_numbers / size_of_element;
    printf("Size of array: %i\n", length_of_numbers);

    //Printing out all array values
    for(int i = 0; i< length_of_numbers; i++){
        printf("Array value at index %i: %i\n", i, array[i]);
    }
}