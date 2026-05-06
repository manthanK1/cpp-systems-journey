#include <iostream>

using namespace std;

void sumofN(int n) {   // this function calculates the sum of numbers from 1 to n
    int sum = 0;
    for (int i =1; i<=n; ++i) {
        sum +=i;
    }
    cout << "the sum of numbers from 1 to " << n << " is "<<sum <<endl;
}


int main(){ // this is the main function where the program starts execution
    int n;
    cout<< " enter a postive integer;" ;
    cin >> n;
    sumofN(n);
    /*
    the program prompts the user to enter a positive integer, reads the input, and then calls the sumofN function to calculate and display the sum of numbers from 1 to n.
    */
}
