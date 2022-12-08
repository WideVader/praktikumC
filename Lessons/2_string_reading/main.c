#include <stdio.h>

int main()
{
    char input[50];
    printf("Enter name: ");
    //We don't use scanf as any white space character like space, tab or new line will be read as \0 and end the input string
    // scanf("%s", input);

    //We use fgets instead of scanf so we wouldnt have problems with white spaces
    fgets(input, sizeof(input), stdin);
    printf("You entered: %s\n", input);
}
