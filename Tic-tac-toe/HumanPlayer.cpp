#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const string& s, Piece p) :Player::Player(s, p) { ; }

void HumanPlayer::makeMove(Board &board) const
{
	int squareNum = 10;
	while (!(squareNum <= 8 && squareNum >= 0) || !(board.isLegal(this->getPiece(), squareNum)))
	{
		cout << "Enter the square number: ";
		cin >> squareNum;
	}
	board.makeMove(this->getPiece(), squareNum);
}

HumanPlayer::~HumanPlayer() {}