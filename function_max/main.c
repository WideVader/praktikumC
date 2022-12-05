#include <stdio.h>

//declaration of function
int max(int num1, int num2);

int main(){
    //declaring variables prvo and drugo in memory
    int prvo;
    int drugo;
    
    //entering first number
    printf("Enter first number: ");
    scanf("%i", &prvo);
    
    //entering second number
    printf("Enter second number: ");
    scanf("%i", &drugo);

    //calling function max to check which is bigger
    int bigger = max(prvo,drugo);
    printf("Bigger: %i \n", bigger);

    //checking which number is larger old
    // if(prvo > drugo){
    //     printf("Bigger: %i \n", prvo);
    // } else{
    //     printf("Bigger: %i\n", drugo);
    // }
}

//initialization of function
int max(int num1, int num2){
    if(num1 > num2){
        return num1;
    } else{
        return num2;
    }
}