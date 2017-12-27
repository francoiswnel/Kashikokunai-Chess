//
// Created by Francois on 27 Dec 2017.
//

#ifndef KASHIKOKUNAI_STATE_H
#define KASHIKOKUNAI_STATE_H

#include <vector>

class State {
public:
    State();

    State(std::vector<std::vector<int>> *board, int *evaluation);

    ~State();

    std::vector<std::vector<int>> getBoard();

private:
    std::vector<std::vector<int>> *board;
    int *evaluation;
};


#endif //KASHIKOKUNAI_STATE_H
