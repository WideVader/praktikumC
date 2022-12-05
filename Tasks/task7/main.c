#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Declaring functions
int get_user_input();
void sort(int array[], int len);
void print_array(int array[], int len);

int main()
{
    //Declaring array with length of number_len
    int number_len = 10;
    int array[number_len];

    for (int i = 0; i < number_len; i++)
    {
        //Adding pseudo randomly generated numbers to array 
        array[i] = rand() % 1000;
    }

    //Calling functions
    print_array(array, number_len);
    sort(array, number_len);
    print_array(array, number_len);
}

//Initialization of function
void print_array(int array[], int len)
{
    printf("[ ");

    //For loop starting from 0 to length of array that was passed as second argument
    for (int i = 0; i < len; i++)
    {
        printf("%i ", array[i]);
    }
    printf("]\n");
}

//Initialization of function
void sort(int array[], int len)
{
    //Double for loop starting from 0 to length -1 of array that was passed as second argument
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            //Checking if current number is smaller than the next number
            if (array[j] > array[j + 1])
            {
                int disposable = array[j +1];
                array[j+1] = array[j];
                array[j] = disposable;
            }
        }
    }
}