#include <iostream>
#include <cmath>
#include <vector>

void introduction(std::string first_name, std::string last_name);
double average(double num1, double num2);
int tenth_power(int num);
std::vector<int> first_three_multiples(int num);
std::string needs_water(int days, bool is_succulent);
bool is_palindrome(std::string text);

int main()
{
    introduction("Vuong", "Huynh");

    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";

    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";

    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }

    std::cout << needs_water(10, false) << "\n";

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

    return 0;
}


/*Write a function introduction() with no return value that has:
std::string parameter named first_name.
std::string parameter named last_name.
The function should print the last_name, followed by a comma, a space, first_name another space, and finally last_name again.
For example, introduction("James", "Bond"); should print the following:
Bond, James Bond*/

void introduction(std::string first_name, std::string last_name){

    std::cout <<  last_name << ", " << first_name << " " << last_name << std::endl;
}


/*Write a function average() that takes:
A double parameter named num1.
A double parameter named num2.
The function should return a double that is the average of the arguments passed in.*/

double average(double num1, double num2){

    return (num1 + num2) / 2;
}

/*Write a function named tenth_power() that has:
An int parameter named num.
The function should return num raised to the 10th power.*/

int tenth_power(int num){

    return pow(num, 10);
//    return num * num * num * num * num * num * num * num * num * num;
}


/*Write a function named first_three_multiples() that has:
An int parameter named num.
The function should return an std::vector of the first three multiples of num in ascending order.
For example, first_three_multiples(7) should return a vector with 7, 14, and 21.*/

std::vector<int> first_three_multiples(int num){

    std::vector<int> result;

    for (int i = 1; i <= 3; i++){
        result.push_back(num*i);
    }
    return result;
}


/*Define a function needs_water() that accepts:

An int number of days since the previous watering.
A bool value is_succulent. (A value of true would indicate that the plant is a succulent.)
Inside the function, you’ll need some conditional logic:

If is_succulent is false and days is greater than 3, return "Time to water the plant.".
If is_succulent is true and days is 12 or less, return "Don't water the plant!".
If is_succulent is true and days is greater than or equal to 13, return "Go ahead and give the plant a little water.".
Otherwise, return "Don't water the plant!".
Note: Don’t print the strings; return them from the function.*/

std::string needs_water(int days, bool is_succulent){

    if (!is_succulent && days > 3){
        return "Time to water the plant.\n";
    }
    else if (is_succulent && days <= 12){
        return "Don't water the plant!\n";
    }
    else if (is_succulent && days >= 13){
        return "Go ahead and give the plant a little water.\n";
    }
    else{
        return "Don't water the plant!\n";
    }

}


/*Define a function is_palindrome() that takes:

An std::string parameter text.
The function should return:

true if text is a palindrome.
false if text is not a palindrome.
(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “ardvark” are not.)

We will not test for edge cases such as capitalization or spaces.*/

bool is_palindrome(std::string text){

    std::string new_text;

    for (int i = text.size() - 1; i >= 0; i--){
        new_text.push_back(text[i]);
    }
    return new_text == text;
}
