#include <ctime>
#include "Game.h"

int main() {
	
	srand((unsigned)time(0));  // ���������������� ��������� ��������� �����;
	Game game;                 // �������� ������ ���� Game;
	game.selectPlayers();      // ����������� ��� � ��� ������� � ������������;
	game.play();               // ������ ����;
	game.announceWinner();     // ��������� ����������;
	system("PAUSE");
}