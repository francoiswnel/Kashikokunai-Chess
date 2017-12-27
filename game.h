//
// Created by Francois on 27 Dec 2017.
//

#ifndef KASHIKOKUNAI_GAME_H
#define KASHIKOKUNAI_GAME_H

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
    std::string whitePawnLabel = "WP";
    std::string whiteKnightLabel = "WN";
    std::string whiteBishopLabel = "WB";
    std::string whiteRookLabel = "WR";
    std::string whiteQueenLabel = "WQ";
    std::string whiteKingLabel = "WK";
    std::string blackPawnLabel = "BP";
    std::string blackKnightLabel = "BN";
    std::string blackBishopLabel = "BB";
    std::string blackRookLabel = "BR";
    std::string blackQueenLabel = "BQ";
    std::string blackKingLabel = "BK";
};


#endif //KASHIKOKUNAI_GAME_H
