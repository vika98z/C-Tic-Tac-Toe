#include "Game.h"

Game::Game() {}

Player *Game::selectPlayer(Piece pPiece)
{
	int playerType = -1;
	cout << (char)pPiece << ") (human - 0, computer - 1, advanced computer player - 2): ";
	while (!(playerType >= 0 && playerType <= 2))
		cin >> playerType;
	if (playerType == 0)
	{
		string playerName;
		cout << "Enter the name of the human player: ";
		cin >> playerName;
		return new HumanPlayer(playerName, pPiece);
	}
	else if (playerType == 1)
		return new RandomPlayer(pPiece);
	else
		return new advancedComputerPlayer(pPiece);
}

void Game::selectPlayers()
{
	cout << "Select the type of the player #1 (";
	player1 = selectPlayer(Piece::first);
	cout << "Select the type of the player #2 (";
	player2 = selectPlayer(Piece::second);
}

void Game::play()
{
	int num;
	while (isRunning())
	{
		board.display();
		Player *nextP = nextPlayer();
		if (nextP == player1)
			num = 1;
		else
			num = 2;
		cout << nextP->getName() << " (player #" << num << ") makes a move" << endl;
		nextP->makeMove(board);
		movesMade++;
		if (movesMade > 4)
			if (board.isWinner(Piece::first) || board.isWinner(Piece::second))
				break;
	}
	board.display();
}

Player *Game::nextPlayer() const
{
	if (movesMade % 2 == 0)
		return player1;
	return player2;
}

bool Game::isRunning() const
{
	return !board.isFull();
}

void Game::announceWinner()
{
	if (movesMade < 9)
	{
		if (movesMade % 2 == 0)
			cout << "Player #2 " << player2->getName() << " wins!!!" << endl;
		else
			cout << "Player #1 " << player1->getName() << " wins!!!" << endl;
	}
	else
		cout << "The game ended in a draw!" << endl;
}

Game::~Game()
{
	delete player1;
	delete player2;
}
