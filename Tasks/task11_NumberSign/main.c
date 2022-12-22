#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    scanf("%i",&a);
    if(a>0){
        printf(">0 za stevilo %i\n", a);
    }
    else if(a<0){
        printf("<0 za stevilo %i\n", a);
    }
    else if(a==0){
        printf("=0 za stevilo %i\n", a);
    }
}