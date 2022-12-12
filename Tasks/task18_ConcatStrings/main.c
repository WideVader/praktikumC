#include <stdio.h>

//Declaration of function
void combine(char str1[], char str2[]);

int main()
{
    //Defining 2 char arrays(Strings) that are 50 bytes long
    char str1[50] = "Hello";
    char str2[50] = " world!";

    //Calling function to combine strings
    combine(str1, str2);
    //Printing combined string
    printf("Copied string: %s\n", str1);
}

//Initialization of function
void combine(char str1[], char str2[])
{
    //Defining offset
    int offset = 0;
    while (str1[offset] != '\0')
    {
        //Incrementing offset
        offset++;
    }

    //Defining index
    int index = 0;
    while (str2[index] != '\0')
    {
        str1[index + offset] = str2[index];
        //Incrementing index
        index++;
    }

    //We add this so it would add null byte at the end of string
    str1[index + offset] = '\0';
}