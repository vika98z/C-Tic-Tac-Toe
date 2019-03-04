#ifndef ADVANCEDCOMPUTERPLAYER_H
#define ADVANCEDCOMPUTERPLAYER_H

#include "RandomPlayer.h"

class advancedComputerPlayer :
	public RandomPlayer
{
public:
	advancedComputerPlayer(Piece);			// ���������� � ������������ �������� ������;
	void makeMove(Board&) const override;	// ����� ���, ��� ������� ���, ���������, ���������� �� ���, ������� �������� ����������� �������. 
											// ���� ����� ��� ����, �� �����������, ���� ��� ���, ����������� ��� � ��������� ������.
	~advancedComputerPlayer();
};

#endif // !ADVANCEDCOMPUTERPLAYER_H
