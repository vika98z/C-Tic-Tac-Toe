#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player
{
public:
	HumanPlayer(const string&, Piece);
	void makeMove(Board&) const override; // ����������� � ������������ ����� ������, � ������� �� ����� �� ���������
										  // ������ 
										  // (���������: ������������ ���� � ������� ��������� ����������� � 
										  // ������������ ����� ������, �� ��� ���, ���� �� �� ����� ������������ 
										  // ����� ������ (�� 0 �� 9), �� ������� ������� �������).
	~HumanPlayer();
};
#endif // !HUMANPLAYER_H