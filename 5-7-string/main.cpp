#include<iostream>
#include<string>


// use std::string_view is read only instead of creating a copy with std::string which can become expensive.
void printString(std::string_view str)
{
    std::cout << str;
}

int main()
{
    std::string name {"Billy"}; // init name with string literal Billy
    std::cout << name << '\n';

    // cannot std::cin for strings with spaces
    // must used std::getline() with std::cin and std::ws , where std::ws will allow whitespace
    std::cout << "Enter your full Name: " << '\n';
    std::string fullName {};
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "Your full name is: " << fullName;
    std::cout << fullName << " has " << fullName.length() << " characters\n";

    printString("BOOYAH!");
    
    return 0;
}