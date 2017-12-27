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
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::cout << currentState->getBoard()[i][j] << " ";
        }
        std::cout << std::endl;
    }
}