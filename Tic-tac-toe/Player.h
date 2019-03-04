#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"
#include <string>

class Player
{
	string name; // ��� ������
	Piece piece; // ��� ������
public:
	Player(const string&, Piece); // �����������, ������� ��������� ��� ������ � ��� ������
	Piece getPiece() const;       // ���������� ������, ������� ���������� �����
	string getName() const;       // ���������� ��� ������;  
	virtual void makeMove(Board&) const = 0; // ����� ����������� �������, ������� ���������� ������ ������ ���
	virtual ~Player();
};

#endif // !PLAYER_H
