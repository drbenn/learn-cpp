#include<iostream>

int main() {
  std::cout << "Enter an integer: ";
  int number {};
  std::cin >> number;
  std::cout << "Double " << number << " is: " << number * 2 << '\n';
  std::cout << "Triple " << number << " is: " << number * 3 << '\n';

  return 0;
}