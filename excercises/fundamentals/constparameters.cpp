#include <iostream>

//const parameters in C++ are parameters that cannot be modified within the function. 
//ey are declared using the const keyword before the parameter type. 
//This is useful for ensuring that the function does not accidentally modify the input parameters, and it also allows the function to accept constant arguments.

void printInfo(const std::string name, const int age);
int main() {
    std::string name = "John Doe";
    const int age =30;

    printInfo(name,age);
    return 0;

}

void printInfo(const std::string name, const int age) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}