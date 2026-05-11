#include "zobrist.h"
#include <random>
U64 pieceKeys[12][64];
U64 sideKey;
U64 castleKeys[16];
U64 epKeys[8];
static std::mt19937_64 rng(123456789ULL);
static U64 rand64() {
    return rng();
}
void init_zobrist() {
    for (int p = 0; p < 12; p++)
        for (int sq = 0; sq < 64; sq++)
            pieceKeys[p][sq] = rand64();
    for (int i = 0; i < 16; i++)
        castleKeys[i] = rand64();
    for (int i = 0; i < 8; i++)
        epKeys[i] = rand64();
    sideKey = rand64();
}
