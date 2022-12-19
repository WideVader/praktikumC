#include <stdio.h>

//Declaration of function
void swap(int* a, int* b);

int main(){
    //Declaring variables x and y
    int x = 10;
    int y = 30;

    printf("Original    \t(%i | %i)\n", x,y);

    //Calling function swap
    swap(&x, &y);
    printf("Swapped \t(%i | %i)\n", x,y);
}

//Initialization of function
void swap(int* a, int* b){
    //Declaring pointer variable with value of a
    int c = *a;
    //Switching places
    *a = *b;
    *b = c;    
}

