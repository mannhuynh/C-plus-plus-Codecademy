#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "interview.hpp"

using namespace std;

int main(){

    cout << reverse_word("Dog runs too far away") << endl << endl;

    cout << "Is this text palindrome? " << is_palindrome("racecar") << endl << endl;

    fizzbuzz();

    return 0;
}
