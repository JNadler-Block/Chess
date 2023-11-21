#include "Board.hpp"
#include "Rook.hpp"
#include "Bishop.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "King.hpp"
#include "Queen.hpp"



Board::Board(){
    populate();
}


void Board::populate(){
    // White Pieces
    board[0][0] = new Rook(true);
    board[1][0] = new Knight(true);
    board[2][0] = new Bishop(true);
    board[3][0] = new King(true);
    board[4][0] = new Queen(true);
    board[5][0] = new Bishop(true);
    board[6][0] = new Knight(true);
    board[7][0] = new Rook(true);
    
    board[0][1] = new Pawn(true);
    board[1][1] = new Pawn(true);
    board[2][1] = new Pawn(true);
    board[3][1] = new Pawn(true);
    board[4][1] = new Pawn(true);
    board[5][1] = new Pawn(true);
    board[6][1] = new Pawn(true);
    board[7][1] = new Pawn(true);

    // Black Pieces
    board[0][7] = new Rook(false);
    board[1][7] = new Knight(false);
    board[2][7] = new Bishop(false);
    board[3][7] = new King(false);
    board[4][7] = new Queen(false);
    board[5][7] = new Bishop(false);
    board[6][7] = new Knight(false);
    board[7][7] = new Rook(false);

    board[0][6] = new Pawn(false);
    board[1][6] = new Pawn(false);
    board[2][6] = new Pawn(false);
    board[3][6] = new Pawn(false);
    board[4][6] = new Pawn(false);
    board[5][6] = new Pawn(false);
    board[6][6] = new Pawn(false);
    board[7][6] = new Pawn(false);
}