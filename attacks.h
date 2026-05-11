#pragma once
#include "types.h"
extern U64 pawnAttacks[2][64];
extern U64 knightAttacks[64];
extern U64 kingAttacks[64];
void init_leapers();
U64 rook_attacks(int sq, U64 occ);
U64 bishop_attacks(int sq, U64 occ);
U64 queen_attacks(int sq, U64 occ);
