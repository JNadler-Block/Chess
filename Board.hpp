#include "Pieces.hpp"

const int SIZE = 8;

class Board {
    public:
        Board();
		// sets up initial board configuration
		void populate();
		// check if a piece can be moved from the first coordinate to the second
		// coordinate and return successful
		bool move(tuple<int>, tuple<int>);
    private:
        Pieces* board[SIZE][SIZE];
};
