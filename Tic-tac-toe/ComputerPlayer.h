#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "Player.h"
class ComputerPlayer :
	public Player
{
public:
	ComputerPlayer(Piece);	// �������� ����������� �������� ����� � ������ ������������� � 
							// ����� �������� ����� ������ ������ "Computer"
	~ComputerPlayer();
};

#endif// !COMPUTERPLAYER_H