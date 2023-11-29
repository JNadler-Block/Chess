#include "Piece.hpp"

class Queen : public Piece {
    public:
        Queen(bool color) : Piece("Queen", color){};
        bool ValidMove(int, int);
        bool ValidCapture(int, int);
};
