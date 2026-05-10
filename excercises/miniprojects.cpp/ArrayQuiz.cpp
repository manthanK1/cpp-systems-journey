#include <iostream>
#include <cctype>   // for toupper()

int main() {

    std::string questions[] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the largest mammal?"
    };

    std::string options[][4] = {
        {"Paris", "London", "Rome", "Berlin"},
        {"3", "4", "5", "6"},
        {"Elephant", "Blue Whale", "Giraffe", "Hippopotamus"}
    };

    char answers[] = {'A', 'B', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {

        std::cout << "\n" << questions[i] << std::endl;

        char optionLetter = 'A';

        for (int j = 0; j < 4; j++) {
            std::cout << optionLetter << ". " << options[i][j] << std::endl;
            optionLetter++;
        }

        std::cout << "Enter your answer (A, B, C, D): ";
        std::cin >> guess;

        guess = toupper(guess);

        if (guess == answers[i]) {
            std::cout << "Correct!\n";
            score++;
        }
        else {
            std::cout << "Wrong! Correct answer was: "
                      << answers[i] << std::endl;
        }
    }

    std::cout << "\nYour final score is: "
              << score << "/" << size << std::endl;

    return 0;
}