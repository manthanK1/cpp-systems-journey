// error handling 
#include <iostream>
using namespace std;

int sumofN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    
    if (!(cin >> n)) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }

    if (n < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    int result = sumofN(n);

    cout << "Sum from 1 to " << n << " is " << result << endl;

    return 0;
}