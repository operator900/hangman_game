#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Hangman {
    public:
        Hangman();
        ~Hangman();
        size_t getSize() const;

    private:
        vector<string>* hangmanCharts = new vector<string>;
        int position = 0;
};