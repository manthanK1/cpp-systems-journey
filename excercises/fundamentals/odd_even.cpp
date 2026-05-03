#include <iostream>
using namespace std;

int main() { 
    int num;
    cout << " enter an integer:" ;
    cin >> num;
    cout << num << " is an " << (num % 2 == 0 ? "even" : "odd") << " number." << endl;
    return 0;

}