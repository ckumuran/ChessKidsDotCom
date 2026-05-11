#include "debug.h"
bool board_ok(const Board& board) {
    int whiteKings = __builtin_popcountll(board.pieces[WHITE_KING]);
    int blackKings = __builtin_popcountll(board.pieces[BLACK_KING]);
    return whiteKings == 1 && blackKings == 1;
}
