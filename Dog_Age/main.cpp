#include <iostream>
//#include <string>

int main() {
  std::string dog_name;
  int dog_age;
  int early_years;
  int later_years;
  int human_years;

  // Ask for dog name:
  std::cout << "Please enter your dog name ";
  getline(std::cin,dog_name);
  // Ask for dog age is older than 2 years
  std::cout << "Enter your dog age if it is older than 2 year-old: ";
  std::cin >> dog_age;

  // “The first two years of a dog’s life count as 21 human years.”
  early_years = 21;

  // “Each following year counts as 4 human years.”
  later_years = (dog_age - 2) * 4;

  // Turn out to human age:
  human_years = early_years + later_years;

  std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.";
  }
