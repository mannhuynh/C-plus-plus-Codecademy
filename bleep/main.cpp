#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main()
{
    std::string word = "broccoli";
    std::string sentence = "I sometimes eat broccoli.";
    " There are three interesting things about broccoli."
    " \nNumber One. Nobody knows how to spell it. \nNumber Two."
    " No matter how long you boil it,"
    " it's always cold by the time it reaches your plate."
    " \nNumber Three. It's green. #broccoli";

    bleep(word, sentence);
    for (int i=0; i<sentence.size(); i++){
        cout << sentence[i];
    }


}
