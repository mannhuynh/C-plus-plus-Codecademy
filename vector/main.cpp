/*
Write a program to find the sum of even numbers and the product of odd numbers in a vector.
For example:
Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.
Then the program should output:
Sum of even numbers is 12
Product of odd numbers is 27
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {2, 4, 3, 6, 1, 9};
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++){
        if (numbers[i] % 2 == 0 ){
            sum += numbers[i];
        }
        else{
            product *= numbers[i];
        }
    }

    cout << "Sum: " << sum << "\n";
    cout << "Product: " << product << "\n";

}
