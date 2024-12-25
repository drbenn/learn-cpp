# Section 0.12

Setting a language standard for VS Code

For VS Code, you can follow the rules above for setting a language standard in GCC/G++/Clang.

Place the appropriate language standard flag (including the double quotes and comma) in the tasks.json configuration file, in the "args" section, on its own line before "${file}".

We also want to configure Intellisense to use the same language standard. For C++20, in settings.json, change or add the following setting on its own line: "C_Cpp.default.cppStandard": "c++20".

# Section 2.8 mutliple files

- CodeRunner works on single files, but imports and advanced its trash.

- using this method tasks.json is unrequired, in powershell must just use g++ compiler straight up
- must have header file functions.hpp included in both functions.cpp and main.cpp
- cd into folder
- g++ -o ./main ./main.cpp ./functions.cpp
- ./main