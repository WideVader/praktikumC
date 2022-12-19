#include <stdio.h>
#include <string.h>
#include <time.h>

//Option 1 for defining global variables (Better version)
#define MAX_STRING_LENGTH 500
#define MAX_TASKS 30

//Option 2 for defining global variables
/*const int MAX_STRING_LENGTH = 500;
const int MAX_TASKS = 30;*/


//Declaring functions
void load_tasks(char tasks[][MAX_STRING_LENGTH], int* size);
void print_tasks(char tasks[][MAX_STRING_LENGTH], int* size);
void add_task(char tasks[][MAX_STRING_LENGTH], int* size, char task[]);
void main_menu(char tasks[][MAX_STRING_LENGTH], int* size);
void remove_task(char tasks[][MAX_STRING_LENGTH], int* size, int index);

//argc is argument counter, it starts from 1. first one is the calling of the file
//argv is a list containing all string arguments
int main(int argc, char* argv[]){

    // prepare variables that will hold data
    char tasks[MAX_TASKS][MAX_STRING_LENGTH];
    int size = 0;

    //Calling functions and passing arguments
    load_tasks(tasks, &size);
    
    //Check if user added an argument
    //If yes: insert argument string to out task list
    if(argc == 2){
        // printf("\nYou entered: %s\n", argv[1]);
        add_task(tasks,&size,argv[1]);
    }
    main_menu(tasks, &size);
    // print_tasks(tasks, &size);
}

//Initialization of functions
void load_tasks(char tasks[][MAX_STRING_LENGTH], int* size){

    //The  strcpy()  function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.
    strcpy(tasks[0], "Learn C\n");
    strcpy(tasks[1], "Learn Git\n");
    strcpy(tasks[2], "Do homework\n");

    //Chaning size to 3 as 3 elements were added
    *size = 3;
}

void print_tasks(char tasks[][MAX_STRING_LENGTH], int* size){
    printf("\nTo-do list: \n");
    //For loop from 0 to value of size
    for(int i = 0; i<*size; i++){
        printf("%i: %s",i,tasks[i]);
    }
    printf("\n");
}

void add_task(char tasks[][MAX_STRING_LENGTH], int* size, char task[]){
    //Check if task list is full
    //Guard clauses
    if(*size >= MAX_TASKS){
        printf("ERROR: Task list is full! Can't add new items!\n");
        return;
    }

    //Add newline character (\n) to the new task string
    strcat(task, "\n");
    
    //Insert [copy] the task string into our tasks array
    strcpy(tasks[*size], task);
    
    //Increment size due to new element
    // *size+=1;

    //Better way
    (*size)++;
}

void main_menu(char tasks[][MAX_STRING_LENGTH], int* size){
    //Size doesn't have an adress(&) infront of it as it is not an adress it is already a pointer
    //If it had an adress(&) infront it would be of type pointer pointer
    print_tasks(tasks, size);
    printf("Enter <index> to delete specified task.");
    printf("Or press [enter] to exit the program.\n");

    char line[MAX_STRING_LENGTH];
    //stdin standrad input
    fgets(line, sizeof(line), stdin);

    int selected_index = 0;
    if(sscanf(line, "%i", &selected_index) == 1){
        remove_task(tasks, size, selected_index);
        main_menu(tasks,size);
    }
}

void remove_task(char tasks[][MAX_STRING_LENGTH], int* size, int index){
    //Check if index is valid
    if(index< 0 || index>= *size){
        printf("ERROR: Index out of bounds!\n");
        return;
    }
    //Shift elements one element to the left
    for(int i = index; i < (*size - 1); i++){
        strcpy(tasks[i], tasks[i+1]);
    }
    //Decrement size due to removed element
    (*size)--;
}