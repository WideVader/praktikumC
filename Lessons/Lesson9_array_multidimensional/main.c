#include <stdio.h>

//Declaring function of print_points
void print_points(int points[][2], int len);

int main()
{
    //Multidimensional array declaration
    int points[3][2] = {{1, 1}, {3, 5}, {3, 2}};

    //Built in sizeof gets the size of points in memory length and size of one elemnt, divides them to get the length of array
    int points_length = sizeof(points) / sizeof(points[0]);
    printf("Number of points: %i\n", points_length);

    //Calling function print_points and passing it points array and length of it
    print_points(points, points_length);
}

//Initialization of function
void print_points(int points[][2], int len)
{
    //going trough the whole array points by its length
    for (int i = 0; i < len; i++)
    {
        //taking every first element in multidimensional array
        int x = points[i][0];
        int y = points[i][1];
        printf("Tocka %i: (%i, %i)\n", i + 1, x, y);
    }
}