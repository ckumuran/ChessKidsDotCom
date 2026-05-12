<div align="center">

# ♟ chesskidsdotcom

### A modern bitboard chess engine written in C++17.

Built with:
bitboards, alpha-beta pruning, transposition tables,
incremental hashing, UCI support,
and an unhealthy amount of debugging.

<br>

![C++17](https://img.shields.io/badge/C%2B%2B-17-blue)
![Bitboards](https://img.shields.io/badge/Board-Bitboards-purple)
![UCI](https://img.shields.io/badge/Protocol-UCI-green)
![AlphaBeta](https://img.shields.io/badge/Search-AlphaBeta-orange)
![WIP](https://img.shields.io/badge/status-work%20in%20progress-lightgrey)

</div>

---

## Why "chesskidsdotcom"?

I grew up playing chess online as a kid.

This project started as:
> “it would be cool to make a chess engine.”

Now it has evolved into:
- move generation
- transposition tables
- perft debugging
- cache optimization
- incremental make/unmake
- and staring at illegal en passant positions for several hours.

---

<div align="center">

<img src="assets/chessmaster.png" width="700"/>

</div>

---

# ✨ Current Features

- Bitboard board representation
- Hybrid mailbox + bitboards
- Packed 32-bit move encoding
- Incremental make/unmake
- Zobrist hashing
- Alpha-beta search framework
- Transposition table framework
- UCI protocol support
- Perft framework
- Debug validation tools

---

# 🧠 Architecture

```text
src/
├── attacks.cpp
├── board.cpp
├── debug.cpp
├── eval.cpp
├── makemove.cpp
├── movegen.cpp
├── perft.cpp
├── search.cpp
├── tt.cpp
├── uci.cpp
├── zobrist.cpp
└── main.cpp
```

---

<div align="center">

<img src="assets/longarm.png" width="700"/>

</div>

---

# ⚙ Engine Design

The engine follows a classical chess engine architecture inspired by:

- Stockfish
- Ethereal
- Crafty
- Fruit
- Berserk

Core principles:

- cache-friendly layouts
- minimal heap allocations
- deterministic search
- incremental updates
- fast reversible make/unmake
- bitboard-first move generation

---

# 🚀 Planned Features

## Move Generation
- Magic bitboards
- Legal move filtering
- Pin detection
- Check evasions
- Castling legality
- En passant legality

## Search
- Iterative deepening
- Quiescence search
- Move ordering heuristics
- Killer/history heuristics
- Null move pruning
- Late move reductions
- Aspiration windows

## Evaluation
- Tapered evaluation
- Piece-square tables
- Pawn structure analysis
- Mobility scoring
- King safety
- Passed pawns

## Future
- NNUE experimentation
- Endgame tablebases
- Search tuning
- SMP threading

---

# 🔨 Build

## Release Build

```bash
make
./chesskidsdotcom
```

## Debug Build

```bash
make debug
```

---

# 🖥 UCI Commands

```text
uci
isready
position startpos
go depth 6
quit
```

Compatible with:
- CuteChess
- Arena
- BanksiaGUI
- ChessBase

---

<div align="center">

<img src="assets/finalform.png" width="700"/>

</div>

---

# 📊 Current Status

The engine is currently under active development.

Core architecture is implemented while:
- legal move generation
- search optimization
- evaluation tuning
- and full perft validation

are still in progress.

---

# 📁 Repository Structure

```text
.
├── attacks.cpp
├── attacks.h
├── bitboard.h
├── board.cpp
├── board.h
├── debug.cpp
├── debug.h
├── eval.cpp
├── eval.h
├── main.cpp
├── makemove.cpp
├── makemove.h
├── move.h
├── movegen.cpp
├── movegen.h
├── perft.cpp
├── perft.h
├── search.cpp
├── search.h
├── tt.cpp
├── tt.h
├── types.h
├── uci.cpp
├── uci.h
├── zobrist.cpp
└── zobrist.h
```

---

# 📚 Inspirations

- Stockfish
- Ethereal
- Berserk
- Crafty
- Fruit

---

# ⚠ Disclaimer

This is a personal systems-programming project focused on:
- chess engine architecture
- search algorithms
- optimization
- low-level performance engineering

It is still a work in progress.

---

<div align="center">

### ♞ Play. Learn. Debug. Repeat.

</div>
