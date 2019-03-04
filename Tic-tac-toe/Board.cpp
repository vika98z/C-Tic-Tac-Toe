#include "Board.h"

const int winning[8][3] = {	
	{0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {2,4,6}, {0,4,8}
};

void Board::clear()
{
	for (int i = 0; i < 9; i++)
	{
		squares[i] = Piece::empty;
	}
}

void Board::display() const
{
	cout << "+---+---+---+" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "| ";
		for (int j = 0; j < 3; j++) {
			cout << (char)squares[3 * i + j];
			cout << " | ";
		}
		cout << endl << "+---+---+---+" << endl;
	}
}

void Board::makeMove(Piece piece, int pos)
{
	squares[pos] = piece;
}

void Board::undoMove(int pos)
{
	squares[pos] = Piece::empty;
}

bool Board::isLegal(Piece piece, int pos)
{
	return squares[pos] == Piece::empty;
}

bool Board::isWinner(Piece piece) const
{
	for (int i = 0; i < 8; i++) {

		if (squares[winning[i][0]] == piece && squares[winning[i][1]] == piece && squares[winning[i][2]] == piece)
		{
			return true;
		}
	}
	return false;
}

bool Board::isFull() const
{
	int a = 0;
	for (int i = 0; i < 9; i++) {
		if (squares[i] != Piece::empty) {
			a += 1;
		}
	}
	return a == 9;
}
