#include <stdio.h>

int max(int a, int b);

int main(){
    int num1 = 10;
    int num2 = 30;
    int bigger = max(num1,num2);
    printf("Bigger: %i\n", bigger);
    num2 = 3;
    printf("Bigger: %i\n", bigger);
}

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}