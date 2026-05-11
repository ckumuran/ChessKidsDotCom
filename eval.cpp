#include "eval.h"
static constexpr int pieceValues[6] = {
    100,
    320,
    330,
    500,
    900,
    0
};
int evaluate(Board& board) {
    int score = 0;
    for (int p = WHITE_PAWN; p <= WHITE_KING; p++)
        score += pieceValues[p] * __builtin_popcountll(board.pieces[p]);
    for (int p = BLACK_PAWN; p <= BLACK_KING; p++)
        score -= pieceValues[p - 6] * __builtin_popcountll(board.pieces[p]);
    return board.side == WHITE ? score : -score;
}
