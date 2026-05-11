#include "perft.h"
#include "movegen.h"
#include "makemove.h"
uint64_t perft(Board& board, int depth) {
    if (depth == 0)
        return 1ULL;
    MoveList list;
    generate_moves(board, list);
    uint64_t nodes = 0ULL;
    for (int i = 0; i < list.count; i++) {
        StateInfo st;
        make_move(board, list.moves[i].move, st);
        nodes += perft(board, depth - 1);
        unmake_move(board, list.moves[i].move, st);
    }
    return nodes;
}
