/*
 * Kashikokunai Chess
 * Created by Francois W. Nel on 27 Dec 2017.
 *
 * Description:
 *  TODO
 *
 * Usage:
 *  TODO
 */

#include <algorithm>
#include <iostream>
#include "game.h"

int main() {
    std::string input;
    bool quit = false;
    bool gameActive = false;

    std::cout << "Kashikokunai Chess" << std::endl;
    std::cout << "play:     Start game with white and black randomly assigned" << std::endl;
    std::cout << "play w:   Start game with player as white" << std::endl;
    std::cout << "play b:   Start game with player as black" << std::endl;
    std::cout << "quit:     End game" << std::endl;

    while (!quit) {
        std::cout << "> ";
        std::cin >> input;
        std::transform(input.begin(), input.end(), input.begin(), ::tolower);

        if (!gameActive) {
            // initialise a new game
            if (input == "play") {
                auto game = new Game();
                gameActive = true;
            } else if (input == "play w") {
                auto game = new Game(false);
                gameActive = true;
            } else if (input == "play b") {
                auto game = new Game(true);
                gameActive = true;
            } else if (input == "quit") {
                quit = true;
            } else {
                std::cout << "Error: Invalid command. Please try again." << std::endl;
            }
        } else {
            // make move or quit
            if (input == "quit") {
                quit = true;
            } else {
                std::cout << "Error: Invalid command. Please try again." << std::endl;
            }
        }
    }

    return 0;
}