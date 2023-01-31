#include <iostream>
#include <random>
#include "words.h"

using namespace std;

WordData::WordData(){
    string wordItem;
    ifstream wordFile;

    cout << "Loading words into game..." << endl;
    wordFile.open("words.txt");
    if(wordFile.is_open()){
        while(!wordFile.eof()){
            wordFile >> wordItem;
            wordArray->push_back(wordItem);
        }
    }
    wordFile.close();
    cout << "Loading complete." << endl;
}

string WordData::chooseWord(){
    random_device generator;
    uniform_int_distribution<int> distribution(0, 10000);
    int dice_roll = distribution(generator);
    return wordArray->at(dice_roll);
}

WordData::~WordData(){
    delete [] wordArray;
}

size_t WordData::getSize(){
    return wordArray->size();
}

/*void WordData::removeWord() {

}*/