#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello Worlds!";


    /**
     * This will cause your program to wait for the user to press a key before continuing,
     * which will give you time to examine your program’s output before your operating system closes the console window.
     */
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;
// }