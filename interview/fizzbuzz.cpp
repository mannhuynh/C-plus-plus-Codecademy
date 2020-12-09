/*
fizzbuzz is a good practice of using conditional statement.
This program outputs numbers from 1 to 30.
But for multiples of 3, print Fizz instead of the number
and for the multiples of 5, print Buzz.
For numbers which are multiples of both 3 and 5 print, FizzBuzz.*/

#include <iostream>

using namespace std;

void fizzbuzz()
{

    for (int i = 1; i <= 30; i ++){

        if (i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz\n";

        }
        else if (i % 5 == 0){
            cout << "Buzz\n";
        }
        else if  (i % 3 == 0) {
            cout << "Fizz\n";
        }
        else {
            cout << i << endl;
        }
    }

}
