#ifndef RANDOMPLAYER_H
#define RANDOMPLAYER_H
#include "ComputerPlayer.h"
class RandomPlayer :
	public ComputerPlayer
{
public:
	RandomPlayer(Piece);                 // обращается к конструктору базового класса;
	virtual void makeMove(Board&) const; // делает случайный ход на незанятую клетку;
	~RandomPlayer();
};
#endif // !RANDOMPLAYER_H