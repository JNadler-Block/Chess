#ifndef Piece_h
#define Piece_h

#include <iostream>
#include <vector>

using namespace std;

class Piece {
    public:
        Piece(string n, bool c) { name = n; white = c;};
        bool GetColor() { return white;};
        string GetName() { return name;};
        virtual bool ValidMove(int, int) = 0;
        virtual bool ValidCapture(int, int) = 0;
    private:
        string name = "";
        bool white;
};

#endif
