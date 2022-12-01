#include <stdio.h>
#include <stdbool.h>

int main() {
    if(0){
        printf("Hello world??\n");
    }
    if(1){
        printf("Hello world!\n");
    }

    /// from here on <stdbool> must be included

    bool say_hello_again = true;
    bool are_you_sure = false;
    if(say_hello_again && !are_you_sure){
        printf("Hello again...\n");
    }
}