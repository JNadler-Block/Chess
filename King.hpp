#include "Piece.hpp"

class King : public Piece {
    public:
        King(bool color) : Piece("King", color){};
        bool ValidMove(int, int);
        bool ValidCapture(int, int);
};
