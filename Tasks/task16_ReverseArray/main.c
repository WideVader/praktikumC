#include <stdio.h>

//Declaring functions
int get_user_input();
void reverse(int array[], int len);

int main()
{
    //Declaring array with length of number_of_requests
    int number_of_requests = 5;
    int array[number_of_requests];

    for (int i = 0; i < number_of_requests; i++)
    {
        //Adding numbers to array by user input
        array[i] = get_user_input();
    }

    //Built in sizeof gets the size of array in memory length and size of one elemnt, divides them to get the length of array
    int array_len = sizeof(array) / sizeof(array[0]);
    reverse(array, array_len);

}

//Initialization of function
void reverse(int array[], int len)
{
    //Setting arrayReverse to be the size of starting array
    //int arrayReverse[len];
    printf("[ ");
    for (int i = len-1; i >= 0; i--)
    {
        //Adding array element to begining of reversed array
        //Depricated, needs pointers and double for loop
        //arrayReverse[i] = array[i];
        printf("%i ", array[i]);
    }
    printf("]");
    printf("\n");
}

//Initialization of function
int get_user_input()
{
    //declaring variable
    int input;
    printf("Enter number: ");
    scanf("%i", &input);
    //returning input value
    return input;
}