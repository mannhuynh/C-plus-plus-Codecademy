#include <iostream>

using namespace std;

int main()
{
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;

    cout << "*************************\n";
    cout << "* The Sorting Hat Quiz! *\n";
    cout << "*************************\n\n";

    //Question 1
    cout << "Q1) When I'm dead, I want people to remember me as:\n";
    cout << "\t 1) The Good\n\t 2) The Great\n\t 3) The Wise\n\t 4) The Bold\n\n";
    cin >> answer1;

    switch (answer1){
        case 1: hufflepuff++; break;
        case 2: slytherin++; break;
        case 3: ravenclaw++; break;
        case 4: gryffindor++; break;
        default: cout << "Invalid input";
    }

    //Question 2:
    cout << "Q2) Dawn or Dusk?\n";
    cout << "\t 1) Dawn \n\t 2) Dusk\n";
    cin >> answer2;

    if (answer2 == 1){
        gryffindor++;
        ravenclaw++;
    }
    else if (answer2 == 2){
        hufflepuff++;
        slytherin++;
    }
    else{
        cout << "Invalid input";
    }

    //Question 3
    cout << "Q3) Which kind of instrument most please your ear?\n";
    cout << "\t 1) The violin \n\t 2) The trumpet \n\t 3) The piano \n\t 4) The drum\n";
    cin >> answer3;

    switch (answer3){
        case 1: slytherin++; break;
        case 2: hufflepuff++; break;
        case 3: ravenclaw++; break;
        case 4: gryffindor++; break;
        default: cout << "Invalid input";
    }

    //Question 4:
    cout << "Q4) Which roud tempts you most?\n";
    cout << "\t 1) The wide, sunny grassy lane \n";
    cout << "\t 2) The narrow, dark, lantern-lit alley\n";
    cout << "\t 3) The twisting, leaf-strewn path through woods \n";
    cout << "\t 4) The cobbled street lined (ancient buildings)\n";
    cin >> answer4;

    switch (answer4){
        case 1: hufflepuff++; break;
        case 2: slytherin++; break;
        case 3: gryffindor++; break;
        case 4: ravenclaw++; break;
        default: cout << "Invalid input";
    }
    //The answer:

    int max = 0;
    string house;

    if (gryffindor > max) {
       max = gryffindor;
      house = "Gryffindor";
    }

    else if (hufflepuff > max) {
      max = hufflepuff;
      house = "Hufflepuff";
    }

    else if (ravenclaw > max) {
      max = ravenclaw;
      house = "Ravenclaw";
    }

    else if (slytherin > max) {
      max = slytherin;
      house = "Slytherin";
    }

    cout << "\n" << house << "!\n";

    return 0;
}
