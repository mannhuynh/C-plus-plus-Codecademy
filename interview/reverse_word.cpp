/*
This program will return the reverse words in a sentence.
Split words in a sentence and push back into a vector is tricky in C++;
stringstream class is very handy in parsing every word in a sentence.
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "interview.hpp"

using namespace std;

string reverse_word(string sentence){

    stringstream ss(sentence);
    string word;
    vector<string> split_word;
    string new_sentence;

    //split every word from a sentence and push_back into split_word vector
    while (ss >> word){
        split_word.push_back(word);
    }

    //Iterating backward split_word vector and add it's elements into the new sentence
    for (int i = split_word.size() - 1 ; i >= 0; i--){

        new_sentence += split_word[i] + " ";
     }

    return new_sentence;

}
