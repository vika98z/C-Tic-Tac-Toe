#include "Player.h"

Player::Player(const string & n, Piece p)
{
	name = n;
	piece = p;
}

Piece Player::getPiece() const
{
	return piece;
}

string Player::getName() const
{
	return name;
}

Player::~Player() {}