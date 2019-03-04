#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player
{
public:
	HumanPlayer(const string&, Piece);
	void makeMove(Board&) const override; // запрашивает с пользователя номер клетки, в которую он хотел бы поместить
										  // фигуру 
										  // (подсказка: организовать цикл в котором программа запрашивает с 
										  // пользователя номер клетки, до тех пор, пока он не введёт существующий 
										  // номер клетки (от 0 до 9), не занятой никакой фигурой).
	~HumanPlayer();
};
#endif // !HUMANPLAYER_H