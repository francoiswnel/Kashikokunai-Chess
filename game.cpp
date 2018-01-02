//
// Created by Francois on 27 Dec 2017.
//

#include <iostream>
#include "game.h"

Game::Game() {
    currentState = new State;
    prevState = new State;
    currentTurn = false;
    player = false;
}

Game::Game(bool player) : player(player) {
    currentState = new State;
    prevState = new State;
    currentTurn = false;
}

Game::Game(State *currentState, State *prevState, bool currentTurn, bool player) : currentState(currentState),
                                                                                   prevState(prevState),
                                                                                   currentTurn(currentTurn),
                                                                                   player(player) {
    // intentionally left blank
}

Game::~Game() {
    delete currentState;
    delete prevState;
}

void Game::printGame() {
    std::cout << std::endl;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9; j++) {
            if (j > 0) {
                switch (currentState->getBoard()->at(i).at(j - 1)) {
                    case EMPTY_SQUARE:
                        std::cout << "   ";
                        break;
                    case WHITE_PAWN_INDEX:
                        std::cout << WHITE_PAWN_LABEL << " ";
                        break;
                    case WHITE_KNIGHT_INDEX:
                        std::cout << WHITE_KNIGHT_LABEL << " ";
                        break;
                    case WHITE_BISHOP_INDEX:
                        std::cout << WHITE_BISHOP_LABEL << " ";
                        break;
                    case WHITE_ROOK_INDEX:
                        std::cout << WHITE_ROOK_LABEL << " ";
                        break;
                    case WHITE_QUEEN_INDEX:
                        std::cout << WHITE_QUEEN_LABEL << " ";
                        break;
                    case WHITE_KING_INDEX:
                        std::cout << WHITE_KING_LABEL << " ";
                        break;
                    case BLACK_PAWN_INDEX:
                        std::cout << BLACK_PAWN_LABEL << " ";
                        break;
                    case BLACK_KNIGHT_INDEX:
                        std::cout << BLACK_KNIGHT_LABEL << " ";
                        break;
                    case BLACK_BISHOP_INDEX:
                        std::cout << BLACK_BISHOP_LABEL << " ";
                        break;
                    case BLACK_ROOK_INDEX:
                        std::cout << BLACK_ROOK_LABEL << " ";
                        break;
                    case BLACK_QUEEN_INDEX:
                        std::cout << BLACK_QUEEN_LABEL << " ";
                        break;
                    case BLACK_KING_INDEX:
                        std::cout << BLACK_KING_LABEL << " ";
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

    currentState->evaluate();
    std::cout << std::endl << "Evaluation: " << currentState->getEvaluation() << std::endl;
}
