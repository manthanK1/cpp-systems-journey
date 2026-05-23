#include <iostream>

int main (){

    int *pNum = NULL;
    pNum = new int; // allocate memory for an integer
    *pNum = 42; // assign a value to the allocated memory

    std::cout << "Value: " << *pNum << std::endl; // Output: 42
    std::cout << "Address: " << pNum << std::endl; // Output: Address of the allocated memory

    delete pNum; // deallocate the memory
    return 0;
}