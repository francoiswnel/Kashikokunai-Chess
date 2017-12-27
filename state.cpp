//
// Created by Francois on 27 Dec 2017.
//

#include "state.h"

State::State() {
    board = new std::vector<std::vector<int>>(8, std::vector<int>(8));
    evaluation = 0;

    // initialise major piece positions:

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

    // initialise pawn positions:

    for (int i = 0; i < 8; i++) {
        board->at(1).at(i) = 7;
        board->at(6).at(i) = 1;
    }
}

State::State(std::vector<std::vector<int>> *board, int evaluation) : board(board), evaluation(evaluation) {
    // intentionally blank
}

State::~State() {
    delete board;
}

std::vector<std::vector<int>> *State::getBoard() {
    return board;
}

int State::getEvaluation() {
    return evaluation;
}


void State::evaluate() {
    evaluation = 0;

    // calculate material worth:

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            switch (board->at(i).at(j)) {
                case WHITE_PAWN_INDEX:
                    evaluation += PAWN_VALUE;
                    break;
                case WHITE_KNIGHT_INDEX:
                    evaluation += KNIGHT_VALUE;
                    break;
                case WHITE_BISHOP_INDEX:
                    evaluation += BISHOP_VALUE;
                    break;
                case WHITE_ROOK_INDEX:
                    evaluation += ROOK_VALUE;
                    break;
                case WHITE_QUEEN_INDEX:
                    evaluation += QUEEN_VALUE;
                    break;
                case WHITE_KING_INDEX:
                    evaluation += KING_VALUE;
                    break;
                case BLACK_PAWN_INDEX:
                    evaluation -= PAWN_VALUE;
                    break;
                case BLACK_KNIGHT_INDEX:
                    evaluation -= KNIGHT_VALUE;
                    break;
                case BLACK_BISHOP_INDEX:
                    evaluation -= BISHOP_VALUE;
                    break;
                case BLACK_ROOK_INDEX:
                    evaluation -= ROOK_VALUE;
                    break;
                case BLACK_QUEEN_INDEX:
                    evaluation -= QUEEN_VALUE;
                    break;
                case BLACK_KING_INDEX:
                    evaluation -= KING_VALUE;
                    break;
                default:
                    break;
            }
        }
    }
}

