#pragma once
#include "types.h"
enum MoveFlags {
    QUIET_MOVE,
    DOUBLE_PUSH,
    KING_CASTLE,
    QUEEN_CASTLE,
    CAPTURE,
    EN_PASSANT,
    PROMOTION,
    PROMO_CAPTURE
};
inline constexpr Move encode_move(
    int from,
    int to,
    int piece,
    int captured,
    int promo,
    int flags
) {
    return from |
           (to << 6) |
           (piece << 12) |
           (captured << 16) |
           (promo << 20) |
           (flags << 24);
}
inline constexpr int move_from(Move m) {
    return m & 0x3F;
}
inline constexpr int move_to(Move m) {
    return (m >> 6) & 0x3F;
}
