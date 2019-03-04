#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "RandomPlayer.h"
#include "advancedComputerPlayer.h"

class Game
{
	Board board;                 // игровое поле;
	Player *player1;             // указатели на игроков;
	Player *player2;
	int movesMade;               // количество сделанных ходов;
	Player *selectPlayer(Piece); // вспомогательный метод, запрашивающий у пользователя тип игрока и 
								 // его имя (если выбран HumanPlayer). Затем функция возвращает динамически созданный объект - 
								 // указатель на Player;
	Player *nextPlayer() const;  // метод возвращает указатель на игрока, ход которого – следующий;	
	bool isRunning() const;      // возвращает true, если игровое поле содержит свободные клетки;
public:
	Game();                      // конструктор по умолчанию, который создаёт пустое игровое поле и
								 // устанавливает значения указателей на Player равными nullptr;
	void selectPlayers();        // метод содержит всего две команды - вызов selectPlayer для player1 и player2;	
	void play();                 // пока isRunning() возвращает true, метод отображает игровое поле и вызывает 
								 // метод makeMove() для очередного игрока (указатель на который возвратил nextPlayer());  
	void announceWinner();       // Объявляет об окончании игры. Выводит имя победителя или сообщение о ничье;
	~Game();                     // удаляет динамически созданные объекты; 
};

#endif // !GAME_H