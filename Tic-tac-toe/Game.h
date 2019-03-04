#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "RandomPlayer.h"
#include "advancedComputerPlayer.h"

class Game
{
	Board board;                 // ������� ����;
	Player *player1;             // ��������� �� �������;
	Player *player2;
	int movesMade;               // ���������� ��������� �����;
	Player *selectPlayer(Piece); // ��������������� �����, ������������� � ������������ ��� ������ � 
								 // ��� ��� (���� ������ HumanPlayer). ����� ������� ���������� ����������� ��������� ������ - 
								 // ��������� �� Player;
	Player *nextPlayer() const;  // ����� ���������� ��������� �� ������, ��� �������� � ���������;	
	bool isRunning() const;      // ���������� true, ���� ������� ���� �������� ��������� ������;
public:
	Game();                      // ����������� �� ���������, ������� ������ ������ ������� ���� �
								 // ������������� �������� ���������� �� Player ������� nullptr;
	void selectPlayers();        // ����� �������� ����� ��� ������� - ����� selectPlayer ��� player1 � player2;	
	void play();                 // ���� isRunning() ���������� true, ����� ���������� ������� ���� � �������� 
								 // ����� makeMove() ��� ���������� ������ (��������� �� ������� ��������� nextPlayer());  
	void announceWinner();       // ��������� �� ��������� ����. ������� ��� ���������� ��� ��������� � �����;
	~Game();                     // ������� ����������� ��������� �������; 
};

#endif // !GAME_H