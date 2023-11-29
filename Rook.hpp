#include "Piece.hpp"

class Rook : public Piece {
    public:
        Rook(bool color) : Piece("Rook", color){};
        bool ValidMove(int, int);
        bool ValidCapture(int, int);
};
