#include<iostream>


int doubleNumber(int num)
{
    return num * 2;
}

int getNumber() {
    std::cout << "Provide a number: ";
    int num {};
    std::cin >> num;
    return num;
}

int main()
{
    int num {getNumber()};
    std::cout << "Your number doubled is: " << doubleNumber(num) << '\n';

    return 0;
}