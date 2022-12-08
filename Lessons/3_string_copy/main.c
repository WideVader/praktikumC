#include <stdio.h>

//Declaration of function
void string_copy(char from[], char to[]);

int main()
{
    //Defining 2 char arrays(Strings) that are 50 bytes long
    char origin[50] = "I want to copy this";
    char destination[50];

    //Calling function to copy strings
    string_copy(origin, destination);
    //Printing copied string
    printf("Copied string: %s\n", destination);
}

//Initialization of function
void string_copy(char from[], char to[])
{
    //Defining index
    int index = 0;
    while (from[index] != '\0')
    {
        to[index] = from[index];
        //Incrementing index
        index++;
    }

    //We add this so it would add null byte at the end of string
    to[index] = '\0';
}