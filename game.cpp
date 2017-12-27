//
// Created by Francois on 27 Dec 2017.
//

#include <iostream>
#include "game.h"

Game::Game() {
    currentState = new State;
    prevState = new State;
    currentTurn = new bool(false);
}

Game::Game(State *currentState, State *prevState, bool *currentTurn) : currentState(currentState), prevState(prevState),
                                                                       currentTurn(currentTurn) {
    // intentionally left blank
}

Game::~Game() {
    delete currentState;
    delete prevState;
    delete currentTurn;
}

void Game::printGame() {
    std::cout << std::endl;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9; j++) {
            if (j > 0) {
                switch (currentState->getBoard()->at(i).at(j - 1)) {
                    case 0:
                        std::cout << "   ";
                        break;
                    case 1:
                        std::cout << whitePawnLabel << " ";
                        break;
                    case 2:
                        std::cout << whiteKnightLabel << " ";
                        break;
                    case 3:
                        std::cout << whiteBishopLabel << " ";
                        break;
                    case 4:
                        std::cout << whiteRookLabel << " ";
                        break;
                    case 5:
                        std::cout << whiteQueenLabel << " ";
                        break;
                    case 6:
                        std::cout << whiteKingLabel << " ";
                        break;
                    case 7:
                        std::cout << blackPawnLabel << " ";
                        break;
                    case 8:
                        std::cout << blackKnightLabel << " ";
                        break;
                    case 9:
                        std::cout << blackBishopLabel << " ";
                        break;
                    case 10:
                        std::cout << blackRookLabel << " ";
                        break;
                    case 11:
                        std::cout << blackQueenLabel << " ";
                        break;
                    case 12:
                        std::cout << blackKingLabel << " ";
                        break;
                    default:
                        break;
                }
            } else if (j == 0) {
                switch (i) {
                    case 0:
                        std::cout << "8 ";
                        break;
                    case 1:
                        std::cout << "7 ";
                        break;
                    case 2:
                        std::cout << "6 ";
                        break;
                    case 3:
                        std::cout << "5 ";
                        break;
                    case 4:
                        std::cout << "4 ";
                        break;
                    case 5:
                        std::cout << "3 ";
                        break;
                    case 6:
                        std::cout << "2 ";
                        break;
                    case 7:
                        std::cout << "1 ";
                        break;
                    default:
                        break;
                }
            }
        }
        std::cout << std::endl;
    }

    std::cout << "  a  b  c  d  e  f  g  h   " << std::endl;
}