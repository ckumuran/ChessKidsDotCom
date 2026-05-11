#include "attacks.h"
U64 pawnAttacks[2][64];
U64 knightAttacks[64];
U64 kingAttacks[64];
void init_leapers() {
    for (int sq = 0; sq < 64; sq++) {
        pawnAttacks[WHITE][sq] = 0ULL;
        pawnAttacks[BLACK][sq] = 0ULL;
        knightAttacks[sq] = 0ULL;
        kingAttacks[sq] = 0ULL;
    }
}
U64 rook_attacks(int sq, U64 occ) {
    return 0ULL;
}
U64 bishop_attacks(int sq, U64 occ) {
    return 0ULL;
}
U64 queen_attacks(int sq, U64 occ) {
    return rook_attacks(sq, occ) |
           bishop_attacks(sq, occ);
}
