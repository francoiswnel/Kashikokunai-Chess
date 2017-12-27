//
// Created by Francois on 27 Dec 2017.
//

#ifndef KASHIKOKUNAI_GAME_H
#define KASHIKOKUNAI_GAME_H

#define EMPTY_SQUARE 0
#define WHITE_PAWN_INDEX 1
#define WHITE_KNIGHT_INDEX 2
#define WHITE_BISHOP_INDEX 3
#define WHITE_ROOK_INDEX 4
#define WHITE_QUEEN_INDEX 5
#define WHITE_KING_INDEX 6
#define BLACK_PAWN_INDEX 7
#define BLACK_KNIGHT_INDEX 8
#define BLACK_BISHOP_INDEX 9
#define BLACK_ROOK_INDEX 10
#define BLACK_QUEEN_INDEX 11
#define BLACK_KING_INDEX 12

#include <string>
#include "state.h"

class Game {
public:
    Game();

    Game(State *currentState, State *prevState, bool *currentTurn);

    ~Game();

    void printGame();

private:
    State *currentState;
    State *prevState;
    bool *currentTurn;
    const std::string WHITE_PAWN_LABEL = "WP";
    const std::string WHITE_KNIGHT_LABEL = "WN";
    const std::string WHITE_BISHOP_LABEL = "WB";
    const std::string WHITE_ROOK_LABEL = "WR";
    const std::string WHITE_QUEEN_LABEL = "WQ";
    const std::string WHITE_KING_LABEL = "WK";
    const std::string BLACK_PAWN_LABEL = "BP";
    const std::string BLACK_KNIGHT_LABEL = "BN";
    const std::string BLACK_BISHOP_LABEL = "BB";
    const std::string BLACK_ROOK_LABEL = "BR";
    const std::string BLACK_QUEEN_LABEL = "BQ";
    const std::string BLACK_KING_LABEL = "BK";
};


#endif //KASHIKOKUNAI_GAME_H
