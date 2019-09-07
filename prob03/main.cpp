// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{

  // Defining variables.
  int height, a_foot, feet, inches;
  a_foot = 12;

  // Getting height in inches.
  std::cout << "Please enter the person's height in inches: ";
  std::cin >> height;

  // Converting height to feet and inches.
  feet = height / 12;
  inches = height % 12;
  std::cout << "That person is " << feet << "'" << inches << "\"\n";


  return 0;
}
