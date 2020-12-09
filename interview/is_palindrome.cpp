
/*
(A palindrome is any text that has the same characters backwards as it does forwards.
 For example, “hannah” and “racecar” are palindromes, while “menu” and “ardvark” are not.)

 This program check if a string is palindrome or not.
*/
#include <string>
using namespace std;

bool is_palindrome(string text){

    string new_text;

    for (int i = text.size() - 1; i >= 0; i--){
        new_text.push_back(text[i]);
    }
    return new_text == text;
}
