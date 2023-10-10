#include "Pieces.hpp";

class Bishop : public Pieces {
    public:
        Bishop() : Pieces("Bishop", make_tuple('a', 10)) {
            
        }
};