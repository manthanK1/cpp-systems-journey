#include <iostream>

int main () {
    int number, guess,tries = 0; //tries gives garbage value but it will be incremented in the loop before being used, so it will work correctly.

    srand(time(NULL)); // seed the random number generator
    number = rand() % 100 + 1; // generate a random number between
    std::cout<<"*****************Number Guessing Game******************" << std::endl;
    
    do {
        std::cout<<"enter a guess between 1 and 100: ";
        std::cin >> guess;
        tries++;
        if (guess > number) {
            std::cout<<"too high! try again."<<std::endl;
        }
        else if (guess < number) {
            std::cout<<"too low! try again."<<std::endl;
        }
        else {
            std::cout<<"congratulations! you guessed the number in "<<tries<<" tries."<<std::endl;
        }
    } while (guess != number);


    return 0;
}

