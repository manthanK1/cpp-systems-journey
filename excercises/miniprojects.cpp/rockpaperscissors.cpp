#include <iostream>
#include <cstdlib>
#include <ctime>

char getComputerChoice();
char getUserChoice();
void determineWinner(char userChoice, char computerChoice);

int main() {

    srand(time(0));

    char userChoice, computerChoice;

    do {

        userChoice = getUserChoice();

        if(userChoice == 'Q') {
            std::cout << "Thanks for playing!\n";
            break;
        }

        computerChoice = getComputerChoice();

        std::cout << "You chose: " << userChoice << '\n';
        std::cout << "Computer chose: " << computerChoice << '\n';

        determineWinner(userChoice, computerChoice);

    } while(true);

    return 0;
}

char getComputerChoice() {

    char choices[] = {'R', 'P', 'S'};
    int randomIndex = rand() % 3;

    return choices[randomIndex];
}

char getUserChoice() {

    char choice;

    std::cout << "Enter (R/P/S) or Q to quit: ";
    std::cin >> choice;

    return toupper(choice);
}

void determineWinner(char userChoice, char computerChoice) {

    if(userChoice == computerChoice) {
        std::cout << "It's a tie!\n";
    }
    else if(
        (userChoice == 'R' && computerChoice == 'S') ||
        (userChoice == 'P' && computerChoice == 'R') ||
        (userChoice == 'S' && computerChoice == 'P')
    ) {
        std::cout << "You win!\n";
    }
    else {
        std::cout << "Computer wins!\n";
    }
}