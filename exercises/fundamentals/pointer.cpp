#include <iostream>
//pointers = variable that stores a memory address of another variable.
// they are used to manipulate data in memory and to create dynamic data structures such as linked lists and trees.
// the syntax for declaring a pointer is as follows:
// & address of operator
// * dereference operator


int main (){

    std::string name = "John Doe";
    std::string *pname = &name; // ptr is a pointer to the variable name
    

    std::cout << "Name: " << name << std::endl; // Output: John Doe
    return 0;

}