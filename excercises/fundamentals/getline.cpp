#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "enter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout <<"enter your age:";
    std::cin >> age ;
    std::cout << "\n" << "hello, " << name << "!" << "\n";
    std::cout << "you are " << age << " years old." << std::endl;

    return 0;

}