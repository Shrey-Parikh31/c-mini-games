# C Mini-Games

Small console programs in C and C++ from my programming labs at Nirma University (2023 to 2025), kept here for reference.

- `dinogame.cpp`: a terminal version of Chrome's offline dino game, based on the Dino Game example from [code-projects.org](https://code-projects.org/dino-game-c-programming-source-code/)
- `2048.c`: the sliding-tile puzzle, based on an example from code-projects.org
- `cquizgame.c`: a console quiz game, based on an example from code-projects.org
- `voting.c`: a small console voting program that casts votes, counts them and shows the leading candidate
- `wordle2.c`: my solution to the CS50 Wordle problem set (it needs the CS50 library, `cs50.h`)

The three programs based on code-projects.org started from their published source, so their original credit lines are kept in the files.

## Build

Each file is standalone. Compile with `gcc` (or `g++` for `dinogame.cpp`). `dinogame.cpp`, `2048.c` and `cquizgame.c` use Windows console headers (`conio.h`, `windows.h`), so build them on Windows.
