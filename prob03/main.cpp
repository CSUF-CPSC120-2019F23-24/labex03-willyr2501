// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int height, inches, feet; //Variables for problem
  std::cout << "What is the height in inches:";
  std::cin >> height;

  feet = height / 12;
  //Height will be divided by 12 inches(equal to 1 ft) to find total feet

  inches = height % 12;
  // Height will be divided by modulous in order to find remainder of inches

  std::cout << "The person is:" << feet <<"'"<< inches <<"\""<< '\n';
  //Coding above will give proper feet symbol ' and inches "
  return 0;
}
