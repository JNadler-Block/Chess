#include "Pieces.hpp"

const int SIZE = 8;

class Board {
    public:
        void populate();
        Board();
    private:
        Pieces* board[SIZE][SIZE];
};