#include <iostream>
#include <limits>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 0.0;
    int choice = 0;

    do {

        std::cout << "\n******** BANKING SYSTEM ********\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch(choice) {

            case 1:
                showBalance(balance);
                break;

            case 2:
                balance += deposit();
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                std::cout << "Goodbye!\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
        }

    } while(choice != 4);

    return 0;
}

void showBalance(double balance) {

    std::cout << "Your balance is: $" << balance << '\n';
}

double deposit() {

    double amount = 0;

    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if(amount > 0) {
        return amount;
    }
    else {
        std::cout << "Invalid amount.\n";
        return 0;
    }
}

double withdraw(double balance) {

    double amount = 0;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if(amount > balance) {
        std::cout << "Insufficient funds.\n";
        return balance;
    }
    else if(amount < 0) {
        std::cout << "Invalid amount.\n";
        return balance;
    }
    else {
        return balance - amount;
    }
}