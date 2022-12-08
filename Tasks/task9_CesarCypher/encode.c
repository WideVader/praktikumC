#include <stdio.h>
#include <ctype.h> 

int main()
{
    char input[500];
    int key = 3;
    fgets(input, sizeof(input), stdin);

    //Defining index
    int index = 0;
    while (input[index] != '\0')
    {
        input[index] += key;
        //Incrementing index
        index++;
    }
    //We add this so it would add null byte at the end of string
    input[index] = '\0';

    printf("%s\n", input);
}