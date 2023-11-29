#include "Piece.hpp"

class Bishop : public Piece {
    public:
        Bishop(bool color) : Piece("Bishop", color){};
        bool ValidMove(int, int);
        bool ValidCapture(int, int);
};
