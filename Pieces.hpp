#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

class Pieces {
    public: 
        string name = "";
        bool white;
        Pieces(string n, bool c) { name = n; white = c;}; 
};