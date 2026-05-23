#include <iostream>

// Pass by reference in C++ allows a function to modify the arguments passed to it.
// When a parameter is passed by reference, the function receives a reference to the original variable, rather than a copy of it.
// This means that any changes made to the parameter within the function will affect the original variable outside the function.

void swap(std::string &a, std::string &b) {
    std::string temp = a;
    a = b;
    b = temp;
}

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    std::cout << "Before swap: " << str1 << " " << str2 << std::endl;

    swap(str1, str2);

    std::cout << "After swap: " << str1 << " " << str2 << std::endl;

    return 0;
}