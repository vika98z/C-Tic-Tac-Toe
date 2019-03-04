#ifndef ADVANCEDCOMPUTERPLAYER_H
#define ADVANCEDCOMPUTERPLAYER_H

#include "RandomPlayer.h"

class advancedComputerPlayer :
	public RandomPlayer
{
public:
	advancedComputerPlayer(Piece);			// обращается к конструктору базового класса;
	void makeMove(Board&) const override;	// перед тем, как сделать ход, проверяет, существует ли ход, который приносит немедленный выигрыш. 
											// Если такой ход есть, он совершается, если его нет, совершается ход в случайную клетку.
	~advancedComputerPlayer();
};

#endif // !ADVANCEDCOMPUTERPLAYER_H
