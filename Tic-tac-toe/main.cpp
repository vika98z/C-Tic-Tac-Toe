#include <ctime>
#include "Game.h"

int main() {
	
	srand((unsigned)time(0));  // инициализируетс€ генератор случайных чисел;
	Game game;                 // создаЄтс€ объект типа Game;
	game.selectPlayers();      // запрашиваем тип и им€ игроков у пользовател€;
	game.play();               // играем игру;
	game.announceWinner();     // объ€вл€ем победител€;
	system("PAUSE");
}