#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

class Pieces {
    public: 
        string name = "";
        tuple <char, int> location;
        vector<tuple <char, int>> possible_moves;
        vector<tuple <char, int>> possible_captures;
        Pieces(string n, tuple<char, int> l) { name = n; location = l;};
};