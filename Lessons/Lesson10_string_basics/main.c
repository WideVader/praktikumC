#include <stdio.h>

int main()
{
    //Defining array of characters to create string
    char string1[50] = "Hello world!";
    char string2[50] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};

    //Printing string out if we know number of characters
    for (int i = 0; i < 13; i++)
    {
        printf("%c", string2[i]);
    }
    printf("\n");

    //Printing string without knowing number of characters using while

    //Setting index to be 0
    int index = 0;
    while (string2[index] != '\0')
    {
        //Printing characters
        printf("%c", string2[index]);
        
        //Incrementing index
        index++;
    }
    printf("\n");

    //Built in for printing string
    printf("%s\n", string2);
}
