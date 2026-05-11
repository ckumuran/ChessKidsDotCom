#include "board.h"
    occupancies[BLACK] = 0ULL;
    occupancies[BOTH] = 0ULL;
    for (int i = 0; i < 64; i++)
        mailbox[i] = NO_PIECE;
    side = WHITE;
    castlingRights = 0;
    epSquare = SQ_NONE;
    halfmoveClock = 0;
    fullmoveNumber = 1;
    hash = 0ULL;
}
bool Board::parse_fen(const std::string& fen) {
    clear();
    std::stringstream ss(fen);
    std::string boardPart;
    ss >> boardPart;
    int sq = 56;
    for (char c : boardPart) {
        if (c == '/') {
            sq -= 16;
            continue;
        }
        if (isdigit(c)) {
            sq += c - '0';
            continue;
        }
        Piece p = NO_PIECE;
        switch (c) {
            case 'P': p = WHITE_PAWN; break;
            case 'N': p = WHITE_KNIGHT; break;
            case 'B': p = WHITE_BISHOP; break;
            case 'R': p = WHITE_ROOK; break;
            case 'Q': p = WHITE_QUEEN; break;
            case 'K': p = WHITE_KING; break;
            case 'p': p = BLACK_PAWN; break;
            case 'n': p = BLACK_KNIGHT; break;
            case 'b': p = BLACK_BISHOP; break;
            case 'r': p = BLACK_ROOK; break;
            case 'q': p = BLACK_QUEEN; break;
            case 'k': p = BLACK_KING; break;
        }
        pieces[p] |= (1ULL << sq);
        mailbox[sq] = p;
        sq++;
    }
    return true;
}
void Board::print() const {
    static const char* symbols = "PNBRQKpnbrqk";
    for (int rank = 7; rank >= 0; rank--) {
        for (int file = 0; file < 8; file++) {
            int sq = rank * 8 + file;
            if (mailbox[sq] == NO_PIECE)
                std::cout << ". ";
            else
                std::cout << symbols[mailbox[sq]] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}
