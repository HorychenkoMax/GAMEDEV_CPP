#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

int main()
{
    std::srand(std::time(0));

    int number_of_current_rounds = 0, number_of_all_rounds = 0, wins = 0, losses = 0, draws = 0;
    char symbol, computer_choice;

    std::cout << "Hello! Welcome to \'Rock paper scissors\' game for 2 players.\n";
    while (true) {
        std::cout << "Enter rounds number (-1 to quit): ";
        std::cin >> number_of_current_rounds;
        if (number_of_current_rounds == -1) {
            std::cout << "Game is over";
            break;
        }
        else if(number_of_current_rounds >= 1)
        {
            number_of_all_rounds += number_of_current_rounds;
            for (int i = 0; i < number_of_current_rounds; i++) {
                while (true) {
                    std::cout << "To make your turn enter one of possible symbols:\nr - rock\np - paper\ns - scissors\n";
                    std::cin >> symbol;
                    if (symbol == 'r' || symbol == 'R' || symbol == 'p' || symbol == 'P' || symbol == 's' || symbol == 'S') break;
                    std::cout << "This character is not processed by the program. Try again\n";
                }
                symbol = std::toupper(symbol);
                std::cout << "Your choice is " << symbol << std::endl;
                int random_number = std::rand() % 3 + 1;
                if (random_number == 1) {
                    computer_choice = 'R';
                }
                else if (random_number == 2) {
                    computer_choice = 'P';
                }
                else
                {
                    computer_choice = 'S';
                }
                std::cout << "PC choice is " << computer_choice << std::endl;
                if (computer_choice == symbol) {
                    draws++;
                    std::cout << "Draw\n";
                }
                else if (symbol == 'R' && computer_choice == 'S' || symbol == 'P' && computer_choice == 'R' || symbol == 'S' && computer_choice == 'P') {
                    wins++;
                    std::cout << "You win!\n";
                }
                else {
                    losses++;
                    std::cout << "You lost!\n";
                }
            }
            std::cout << "Thanks for playing. Your final score:\n";
            std::cout << "number of rounds: " << number_of_all_rounds << std::endl;
            std::cout << "number of wins: " << wins << std::endl;
            std::cout << "number of losses: " << losses << std::endl;
            std::cout << "number of draws: " << draws << std::endl;
            std::cout << std::endl;
        }
        else
        {
            std::cout << "This character is not processed by the program. Try again\n";
        }
    }
}
