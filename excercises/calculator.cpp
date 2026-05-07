#include <iostream>

using namespace std;

int main(){
    double num1,num2;
    char op;

    cout <<"enter first number: ";
    cin >> num1;

    cout <<"enter operator (+,-,*,/): ";
    cin >> op;

    cout <<"enter second number: ";
    cin >> num2;

    if(op == '+') {
        cout << "result: " << num1 +num2 << endl;
        }
    else if (op == '-') {
        cout << "result: " << num1 - num2 << endl;
    }
    else if(op == '*') {
        cout << "result: " << num1 * num2 << endl;
    }
    else if(op == '/') {
        if(num2 == 0) {
            cout << "error: division by zero not allowed."<< endl;
        }
        else{ cout << "result: " << num1 / num2 << endl;
        }
    }    
    else{
        cout << "error: invalid operator." << endl;}
    
    return 0;

}