//
// Created by Francois on 27 Dec 2017.
//

#include "state.h"

State::State() {
    board = new std::vector<std::vector<int>>(8, std::vector<int>(8));
    evaluation = new int(0);
}

State::State(std::vector<std::vector<int>> *board, int *evaluation) : board(board), evaluation(evaluation) {
    // intentionally blank
}

State::~State() {
    delete board;
    delete evaluation;
}

std::vector<std::vector<int>> State::getBoard() {
    return *board;
}


