#include "Piece.hpp"

class Knight : public Piece {
    public:
        Knight(bool color) : Piece("Knight", color){};
        bool ValidMove(int, int);
        bool ValidCapture(int, int);
};
