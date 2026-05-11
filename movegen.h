#pragma once
#include "board.h"
#include "move.h"
struct ScoredMove {
    Move move;
    int score;
};
struct MoveList {
    ScoredMove moves[256];
    int count = 0;
    inline void add(Move m, int score = 0) {
        moves[count++] = {m, score};
    }
};
void generate_moves(Board& board, MoveList& list);
