//
// Created by Francois on 27 Dec 2017.
//

#ifndef KASHIKOKUNAI_STATE_H
#define KASHIKOKUNAI_STATE_H

#define PAWN_VALUE 1
#define KNIGHT_VALUE 3
#define BISHOP_VALUE 3
#define ROOK_VALUE 5
#define QUEEN_VALUE 9
#define KING_VALUE 1000
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

#include <vector>

class State {
public:
    State();

    State(std::vector<std::vector<int>> *board, int evaluation);

    ~State();

    std::vector<std::vector<int>> *getBoard();

    int getEvaluation();

    void evaluate();

private:
    std::vector<std::vector<int>> *board;
    int evaluation;
};


#endif //KASHIKOKUNAI_STATE_H
