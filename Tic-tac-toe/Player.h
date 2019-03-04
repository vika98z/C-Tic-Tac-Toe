#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"
#include <string>

class Player
{
	string name; // имя игрока
	Piece piece; // его фигура
public:
	Player(const string&, Piece); // конструктор, который принимает имя игрока и его фигуру
	Piece getPiece() const;       // возвращает фигуру, которую использует игрок
	string getName() const;       // возвращает имя игрока;  
	virtual void makeMove(Board&) const = 0; // чисто виртуальная функция, которая заставляет игрока делать ход
	virtual ~Player();
};

#endif // !PLAYER_H
