#include <stdio.h>

//declaration of functions
int get_user_input();
void to_kmh(int number);
void to_mps(int number);

int main()
{
    printf("Pick direction of change: \n");
    printf("1) kmh -> mps \n");
    printf("2) mps -> kmh \n");

    //Calling function to get user input
    int direction = get_user_input();
    int number = get_user_input();
    //Cheking which direction was selected
    if (direction == 1)
    {
        to_mps(number);
    }
    else
    {
        to_kmh(number);
    }
}

//Initialization of function
void to_kmh(int number)
{
    float b = (float)number * 3.6f;
    printf("Kmh = %f \n", b);
}

//Initialization of function
void to_mps(int number)
{
    float b = (float)number / 3.6f;
    printf("Kmh = %f \n", b);
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