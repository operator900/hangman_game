#include "hangman.h"
#include "words.h"
#include <iostream>
#include <time.h>

using namespace std;

void start(){
    clock_t timer;
    float seconds;

    timer = clock();
    timer = clock() - timer;
    seconds = ((float)timer)/CLOCKS_PER_SEC;

}

int main(){
    int choice;

    cout << "   Main Menu" << endl;
    cout << "---------------" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. " << endl;


    switch (choice)
    {
    case 1:
        start();
        break;
    case 2:

    
    default:
        break;
    }
}