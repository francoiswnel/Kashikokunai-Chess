//
// Created by Francois on 27 Dec 2017.
//

#include "state.h"

State::State() {
    board = new std::vector<std::vector<int>>(8, std::vector<int>(8));
    evaluation = new int(0);

    board->at(0).at(0) = 10;
    board->at(0).at(1) = 8;
    board->at(0).at(2) = 9;
    board->at(0).at(3) = 11;
    board->at(0).at(4) = 12;
    board->at(0).at(5) = 9;
    board->at(0).at(6) = 8;
    board->at(0).at(7) = 10;
    board->at(7).at(0) = 4;
    board->at(7).at(1) = 2;
    board->at(7).at(2) = 3;
    board->at(7).at(3) = 5;
    board->at(7).at(4) = 6;
    board->at(7).at(5) = 3;
    board->at(7).at(6) = 2;
    board->at(7).at(7) = 4;

    for (int i = 0; i < 8; i++) {
        board->at(1).at(i) = 7;
        board->at(6).at(i) = 1;
    }
}

State::State(std::vector<std::vector<int>> *board, int *evaluation) : board(board), evaluation(evaluation) {
    // intentionally blank
}

State::~State() {
    delete board;
    delete evaluation;
}

std::vector<std::vector<int>> *State::getBoard() {
    return board;
}


