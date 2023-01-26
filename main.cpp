#include "hangman.h"
#include "words.h"
#include <iostream>

using namespace std;

template <typename S>  ostream& operator<<(ostream& os, const vector<S>& vector){
    for(auto& element : hangmanCharts) {
        os << element << " ";
    }
    return os;
}

int main(){
    Hangman picture;
    cout << picture << endl;

}