#include <iostream>
#include <fstream>
#include <algorithm>
#include "hangman.h"

using namespace std;

/*
Constructor
    Returns: N/A
    Throws: exception of member type failure if file isn't found.
    
*/
Hangman::Hangman() {
    ifstream fileArt;
    string item;

    fileArt.open("hangman.txt");
    if(fileArt.is_open()){
        while(!fileArt.eof()){
            fileArt >> item;
            hangmanCharts->push_back(item);
        }
    }
    fileArt.close();
}

/*
Destructor
    Returns: N/A
    Throws: N/A
*/
Hangman::~Hangman(){
    delete [] hangmanCharts;
}

/*

*/
size_t Hangman::getSize() const{
    return hangmanCharts->size();
}
