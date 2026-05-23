#include <iostream>

//nullptr = keyword representing a null pointer, which is a pointer that does not point to any valid memory address.
// It is used to indicate that a pointer is not currently pointing to any object or function.


int main(){

    int *pointer = nullptr;//
    int x = 123;

    //pointer
    pointer = &x; // pointer now points to the address of x

    std::cout << "Value of x: " << x << std::endl; // Output: 123
    std::cout << "Value of pointer: " << pointer << std::endl; // Output: Address of x
    return 0;

}