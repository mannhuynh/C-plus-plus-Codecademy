#include <iostream>

using namespace std;

int main()
{
    int secNum = 9;
    int guesNum;
    int numOfGues = 0;
    bool endOfGues = false;

    while (guesNum != secNum && !endOfGues){
        if (numOfGues < 3){
            cout << "Enter number:";
            cin >> guesNum;
        }
        else{
            endOfGues = true;
        }
        numOfGues++;
    }

    if (endOfGues){
        cout << "You lose!";
    }
    else{
        cout << "WIN!!!";
    }

    return 0;
}
