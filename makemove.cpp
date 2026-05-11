#include "makemove.h"
bool make_move(Board& board, Move move, StateInfo& st) {
    st.hash = board.hash;
    st.castlingRights = board.castlingRights;
    st.epSquare = board.epSquare;
    st.halfmoveClock = board.halfmoveClock;
    board.side = ~board.side;
    return true;
}
void unmake_move(Board& board, Move move, const StateInfo& st) {
    board.hash = st.hash;
    board.castlingRights = st.castlingRights;
    board.epSquare = st.epSquare;
    board.halfmoveClock = st.halfmoveClock;
    board.side = ~board.side;
}
