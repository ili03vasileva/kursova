#include "RockPaperScissors.h"
#include <iostream>

char RockPaperScissors::getUserChoice() {
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do {
        std::cout << "Choose one of the following!\n";
        std::cout << "*************************\n";
        std::cout << "r for Rock\n";
        std::cout << "p for Paper\n";
        std::cout << "s for Scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char RockPaperScissors::getComputerChoice() {
    srand(time(NULL));
    int num = (rand() % 3) + 1;

    switch (num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }

    return 0;
}

void RockPaperScissors::showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }
}

void RockPaperScissors::chooseWinner(char player, char computer) {
    switch (player) {
        case 'r':
            if (computer == 'r') {
                std::cout << "It's a tie!\n";
            } else if (computer == 'p') {
                std::cout << "You lose!\n";
            } else if (computer == 's') {
                std::cout << "You win!\n";
                break;
            }
        case 'p':
            if (computer == 'p') {
                std::cout << "It's a tie!\n";
            } else if (computer == 's') {
                std::cout << "You lose!\n";
            } else if (computer == 'r') {
                std::cout << "You win!\n";
                break;
            }
        case 's':
            if (computer == 's') {
                std::cout << "It's a tie!\n";
            } else if (computer == 'r') {
                std::cout << "You lose!\n";
            } else if (computer == 'p') {
                std::cout << "You win!\n";
                break;
            }
    }
}

void RockPaperScissors::run() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
}
