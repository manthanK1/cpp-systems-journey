#include <iostream>

void happyBirthday(int age, const std::string name);

int main() {
    int age;
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your age: ";
    std::cin >> age;
    happyBirthday(age, name);
    return 0;
}
void happyBirthday(int age,const std::string name) {
    std::cout << "Happy birthday to you!" << std::endl;
    std::cout << "Happy birthday to you!" << std::endl;
    std::cout << "Happy birthday dear " << name << "!" << std::endl;
    std::cout << "Happy birthday dear friend!" << std::endl;
    std::cout << "Happy birthday to you!" << std::endl;
    std::cout << "You are now " << age << " years old!" << std::endl;
}







