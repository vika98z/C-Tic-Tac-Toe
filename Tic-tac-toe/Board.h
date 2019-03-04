#ifndef BOARD_H
#define BOARD_H

#include <iostream>
using  namespace std;

enum class Piece { empty = ' ', first = 'X', second = 'O' };

class Board {
	Piece squares[9];          // одномерный массив клеток (9 элементов типа Piece)
	void clear();              // удаляет все фигуры с доски (все клетки становятся равны Piece::empty);
public:
	Board() { clear(); }       // конструктор по умолчанию, который вызывает метод clear();
	void display() const;      // отображает игровое поле на консоли;
	void makeMove(Piece, int); // помещает фигуру в клетку, номер которой задан вторым параметром;
	void undoMove(int);        // удаляет фигуру из заданной клетки;

	bool isLegal(Piece, int);   // метод проверяет, можно ли поместить фигуру в клетку, заданную вторым параметром;
	bool isWinner(Piece) const; // возвращает true, если текущая позиция является выигрышной для данной фигуры;
								// (Подсказка: существует всего 8 выигрышных комбинаций, которые можно описать во
								// внешнем массиве-константе) 
	bool isFull() const;        // Возвращает true, если поле заполнено
};
#endif // !BOARD_H