#include "uci.h"
#include "attacks.h"
#include "zobrist.h"
int main() {
    init_leapers();
    init_zobrist();
    uci_loop();
    return 0;
}
