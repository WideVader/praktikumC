#include <stdio.h>

int main(){
    //declaring variable i in memory
    int i;
    printf("Enter number: ");
    //&i adress of number i in memory for writing over the value
    scanf("%i", &i);
    //scanf("template %i", &i); [template (number)]
    printf("%i\n",i);
}