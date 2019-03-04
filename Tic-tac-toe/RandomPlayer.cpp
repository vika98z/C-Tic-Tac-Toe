#include "RandomPlayer.h"
#include <ctime>

RandomPlayer::RandomPlayer(Piece p) :ComputerPlayer(p) {}

void RandomPlayer::makeMove(Board &board) const
{
	int r = rand() % 9;
	while (!(board.isLegal(this->getPiece(), r)))
		r = rand() % 9;
	board.makeMove(this->getPiece(), r);
}

RandomPlayer::~RandomPlayer() {}