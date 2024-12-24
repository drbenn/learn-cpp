#include<iostream>

int main()
{
    std::cout << "Enter and integer: ";
    int num1{0};
    std::cin >> num1;

    std::cout << "Enter another integer: ";
    int num2{0};
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " is " << num1 + num2  << ".\n";          // new line with period uses double quotes with .
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << "." << '\n';

    return 0;
}