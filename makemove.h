#pragma once
#include "board.h"
#include "move.h"
struct StateInfo {
    U64 hash;
    int castlingRights;
    Square epSquare;
    int halfmoveClock;
    Piece capturedPiece;
};
bool make_move(Board& board, Move move, StateInfo& st);
void unmake_move(Board& board, Move move, const StateInfo& st);
