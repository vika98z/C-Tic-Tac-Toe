#ifndef RANDOMPLAYER_H
#define RANDOMPLAYER_H
#include "ComputerPlayer.h"
class RandomPlayer :
	public ComputerPlayer
{
public:
	RandomPlayer(Piece);                 // ���������� � ������������ �������� ������;
	virtual void makeMove(Board&) const; // ������ ��������� ��� �� ��������� ������;
	~RandomPlayer();
};
#endif // !RANDOMPLAYER_H