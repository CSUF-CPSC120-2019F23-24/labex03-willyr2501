// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int height, inches, feet;
std::cout << "What is the height in inches:";
std::cin >> height;

feet = height / 12;
inches = height % 12;

std::cout << "The person is:" << feet <<"'"<< inches <<"\""<< '\n';

  return 0;
}
