#include "Pieces.hpp"

class Pawn : public Pieces {
    public:
        Pawn(bool color) : Pieces("Pawn", color){};
};
