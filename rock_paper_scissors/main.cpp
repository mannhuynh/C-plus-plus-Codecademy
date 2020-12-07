/* The logic:
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Scissors.
*/

#include <iostream>
#include <cstdlib> // for rand() function
#include <time.h> //required for srand(time(NULL)

using namespace std;

int main() {

    srand(time(NULL));

    int computer = std::rand() % 3 + 1;

    int user;

    cout << "---------------------------------\n";
    cout << "-    ROCK - PAPER - SCISSORS    -\n";
    cout << "---------------------------------\n";

    cout << "\t 1) ROCK \n";
    cout << "\t 2) PAPER \n";
    cout << "\t 3) SCISSORS \n";
    cout << "Let's play! Pick 1, 2 or 3\n";

    cin >> user;

    if (user == 1){
    cout << "You choose: ROCK \n";
    }
    else if (user == 2){
    cout << "You choose: PAPER \n";
    }
    else if (user == 3){
    cout << "You choose: SCISSORS \n";
    }
    else {
    cout << "You choose wrong number. Choose again! \n";
    }

    if (computer == 1){
    cout << "Computer choose: ROCK \n";
    }
    else if (computer == 2){
    cout << "Computer choose: PAPER \n";
    }
    else if (computer == 3){
    cout << "Computer choose: SCISSORS \n";
    }

    if (user == computer){
    cout << "It's a tied!";
    }
    else if (user == 1) {
        if (computer == 2){
            cout << "You lose. Paper covers Rock";
        }
        else if (computer == 3){
            cout << "You won. Rock crushes Scissors";
        }
    }
    else if (user == 2) {
        if (computer == 1){
            cout << "You won. Paper covers Rock";
        }
        else if (computer == 3){
        cout << "You lose. Scissors cuts Paper";
        }
    }
    else if (user == 3) {
        if (computer == 1){
            cout << "You lose. Rock crushes Scissors";
        }
        else if (computer == 2){
            cout << "You won. Scissors cuts Paper";
        }
    }

  return 0;

}
