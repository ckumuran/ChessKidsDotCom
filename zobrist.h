#pragma once
#include "types.h"
extern U64 pieceKeys[12][64];
extern U64 sideKey;
extern U64 castleKeys[16];
extern U64 epKeys[8];
void init_zobrist();
