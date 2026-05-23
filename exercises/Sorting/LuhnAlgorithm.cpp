/*
Luhn Algorithm
------------------------
-also know as the "modulus 10" or "mod 10" algorithm,
 -is a simple checksum formula used to validate various identification numbers,
 -such as credit card numbers, 
 -IMEI numbers, and other numeric identifiers. 
 -The algorithm was created by Hans Peter Luhn in 1954.
------------------------
------------------------
The Luhn algorithm works as follows:
------------------------
1.Double every second digit from the right to left , if double number is 2 digits, split them 
2.Add all the digits from step 
3.add all the odd numbered digits from right to left
4.Sum results from steps 2 & 3
5.IF step 4 is divisible 10, then number is valid, else -1
------------------------
example:
6011 0009 9013 9424 
6 1  0 0  9 1  9 2 // step 1 
------------------------

12  2 0 0  18 2  18 4 // step 2

---------------------------
sum of of digits from step 2 = 1+2+2+0+0+1+8+2+1+8+4 = 29
---------------------------

sum of odd digits from right to left = 0+1+0+9+0+3+4+4 = 21
---------------------------
total sum = 29 + 21 = 50
---------------------------
50 is divisible by 10, so the number is valid.

50 % 10 = 0 : valid number
*/
#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a card number: ";
    std::cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << "VALID\n";
    }
    else{
        std::cout << "INVALID\n";
    }

    return 0;
}

int getDigit(const int number){

    // If number is 2 digits, split and add them
    // Example: 18 -> 1 + 8 = 9

    return (number % 10) + (number / 10 % 10);
}

int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    // Start from second last digit
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){

        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}

int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    // Start from last digit
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){

        sum += (cardNumber[i] - '0');
    }

    return sum;
}