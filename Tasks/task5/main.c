#include <stdio.h>

//Declaring functions
int get_user_input();
int max(int array[], int len);

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

    //Calling function max and storing value in max_value
    int max_value = max(array, array_len);
    printf("Largest number: %i \n", max_value);
}

//Initialization of function
int max(int array[], int len)
{
    //Setting maxValue to be the first element of array
    int maxValue = array[0];
    for (int i = 0; i < 5; i++)
    {
        //Checking for the maximum value in array
        if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }

    //Returning maximum value
    return maxValue;
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