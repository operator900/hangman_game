#include <iostream>
#include <fstream>
#include <algorithm>
#include "hangman.h"

using namespace std;

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

Hangman::~Hangman(){
    delete [] hangmanCharts;
}

size_t Hangman::getSize() const{
    return hangmanCharts->size();
}
