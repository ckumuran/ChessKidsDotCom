#pragma once
#include "board.h"
struct SearchInfo {
    uint64_t nodes = 0ULL;
    bool stopped = false;
    int depth = 0;
};
int negamax(
    Board& board,
    SearchInfo& info,
    int depth,
    int alpha,
    int beta
);
Move search_position(Board& board, int depth);
