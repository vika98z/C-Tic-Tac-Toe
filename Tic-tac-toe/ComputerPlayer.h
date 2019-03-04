#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "Player.h"
class ComputerPlayer :
	public Player
{
public:
	ComputerPlayer(Piece);	// вызывает конструктор базового класс в списке инициализации и 
							// задаёт значение имени равным строке "Computer"
	~ComputerPlayer();
};

#endif// !COMPUTERPLAYER_H