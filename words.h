#pragma once
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class WordData {
    public:
        WordData(); //Constructor to automatically add words from file to vector.
        ~WordData(); //Destructor for the vector array. 
        //void removeWord();
        size_t getSize(); //getter for amount of words.
        string chooseWord();

    private:
        vector<string>* wordArray = new vector<string>;
};