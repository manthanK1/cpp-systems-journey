#include <iostream>
using namespace std;
int main () {
    int sum = 0 , value = 0;
    while (value <=10) {
        sum +=value;
        ++value;
    }
    std::cout << "the sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
    }