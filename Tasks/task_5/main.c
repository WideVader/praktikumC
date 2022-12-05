#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    scanf("%c",&ch);
    // if (ch>=65 && ch<=90){
       printf("%c in uppercase is represented as %c\n", ch, toupper(ch)); 
    // }
}