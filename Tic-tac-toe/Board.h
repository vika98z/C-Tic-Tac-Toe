#ifndef BOARD_H
#define BOARD_H

#include <iostream>
using  namespace std;

enum class Piece { empty = ' ', first = 'X', second = 'O' };

class Board {
	Piece squares[9];          // ���������� ������ ������ (9 ��������� ���� Piece)
	void clear();              // ������� ��� ������ � ����� (��� ������ ���������� ����� Piece::empty);
public:
	Board() { clear(); }       // ����������� �� ���������, ������� �������� ����� clear();
	void display() const;      // ���������� ������� ���� �� �������;
	void makeMove(Piece, int); // �������� ������ � ������, ����� ������� ����� ������ ����������;
	void undoMove(int);        // ������� ������ �� �������� ������;

	bool isLegal(Piece, int);   // ����� ���������, ����� �� ��������� ������ � ������, �������� ������ ����������;
	bool isWinner(Piece) const; // ���������� true, ���� ������� ������� �������� ���������� ��� ������ ������;
								// (���������: ���������� ����� 8 ���������� ����������, ������� ����� ������� ��
								// ������� �������-���������) 
	bool isFull() const;        // ���������� true, ���� ���� ���������
};
#endif // !BOARD_H