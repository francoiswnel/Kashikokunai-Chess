//
// Created by Francois on 27 Dec 2017.
//

#ifndef KASHIKOKUNAI_GAME_H
#define KASHIKOKUNAI_GAME_H

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
};


#endif //KASHIKOKUNAI_GAME_H
