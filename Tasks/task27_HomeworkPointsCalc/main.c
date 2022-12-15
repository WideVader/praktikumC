#include <stdio.h>
#include <stdbool.h>

//declaration of function
void question(char text[], int* points, bool* all_done);

int main(){
    //Defining variables all_done and points, all_done stores bool value to check if the questions are done
    int points = 0;
    bool all_done = true;

    printf("Possible answers on question (d-Da | n-Ne | p-Priblizno)");

    //Calling function question and sending variables points and all_done
    question("Ali program opravi ovezni del naloge?", &points, &all_done);
    question("Ali si uporabljal funkcije?", &points, &all_done);
    question("Ali si uporabljal lokalne spremenljivke in ne globalne?", &points, &all_done);
    question("Ali si prepravil validnost vnosov?", &points, &all_done);
    question("Ali si uporabljal komentarje?", &points, &all_done);
    //Checking if all is done
    if(all_done)
        question("Ali si implementiral dodatni del naloge?", &points, &all_done);

    printf("Predvideno stevilo tock je okrog%i.\n", points);
}

void question(char text[], int* points, bool* all_done){
    printf("%s", text);
    char input;
    scanf(" %c", &input);
    //Check for what input is
    if(input == 'd'){
        *points +=2;
    }else if(input == 'p'){
        *points += 1;
        *all_done = false;
    }else if(input == 'n'){
        *all_done=false;
    }else{
        printf("Possible answers on question (d-Da | n-Ne | p-Priblizno) use them\n");
        question(text, points, all_done);
    }
}