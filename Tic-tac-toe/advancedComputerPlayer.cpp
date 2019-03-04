#include "advancedComputerPlayer.h"

advancedComputerPlayer::advancedComputerPlayer(Piece p) :RandomPlayer(p) { ; }

void advancedComputerPlayer::makeMove(Board &board) const
{
	Piece p = this->getPiece();
	for (int i = 0; i < 9; i++)
	{
		if (board.isLegal(p,i))
		{
			board.makeMove(p, i);
			if (board.isWinner(p))
				return;
			else
				board.undoMove(i);
		}
	}
	RandomPlayer::makeMove(board);
}

advancedComputerPlayer::~advancedComputerPlayer() {}