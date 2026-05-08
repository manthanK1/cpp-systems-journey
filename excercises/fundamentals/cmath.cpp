#include <iostream>
#include <cmath>

int main() {
    double x , z, y ;

    std::cout << "enter the value of x: ";
    std::cin >> x;

    z = std::pow(x, 2) + 3 * x + 5;
    y = std::sqrt(z);

    std::cout << "the value of z is: " << z << std::endl;
    std::cout << "the value of y is: " << y << std::endl;


    return 0;


}