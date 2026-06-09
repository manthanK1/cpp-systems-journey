#include <iostream>

int main()
{
    int i, j;

    std::cout << "Enter value of i: ";
    std::cin >> i;

    std::cout << "Enter value of j: ";
    std::cin >> j;

    if (i > j)
    {
        std::cout << "Error: i must be less than or equal to j." << std::endl;
        return 0;
    }

    while (i <= j)
    {
        std::cout << "***************************" << std::endl;
        std::cout << i << std::endl;
        ++i;
    }

    return 0;
}