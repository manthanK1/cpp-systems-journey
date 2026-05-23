#include <iostream>
/*
search for a number in an array and return the index if found, otherwise return -1

-1 is a common convention to indicate that the target was not found in the array. It is used because array indices are typically non-negative integers, so -1 is a clear indicator that the search was unsuccessful.

*/
int searchArray(int arr[], int size, int target) {

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            std::cout << "Number found at index: " << i << std::endl;
            return i;
        }
    }

    std::cout << "Number not found in the array." << std::endl;
    return -1;
}

int main(){



    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int MyNumber;
    std::cout << "Enter a number to search: ";
    std::cin >> MyNumber;

    index = searchArray(numbers, size, MyNumber);

    return 0;
}