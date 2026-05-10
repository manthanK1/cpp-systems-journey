#include <iostream>

//multidimensional arrays are arrays of arrays. They can be used to store data in a tabular format, such as a matrix or a table. The syntax for declaring a multidimensional array is as follows:
 
int main() {

    std::string cars[][3] = { 
        {"Volvo", "BMW", "Ford"},
        {"Toyota", "Honda", "Nissan"},
        {"Land Rover","Range Rover","Defender"}};  // 2D array with 3 rows and 3 columns

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);    

    for (int i = 0; i < rows; i++) {    // for loop to iterate through rows
        for (int j = 0; j < cols; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << std::endl;
    }


}