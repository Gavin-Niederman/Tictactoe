#pragma once
#include "Tile.hpp"

class Board
{
public:
	Board();
	void SetTile(char input);
	void PrintBoard();
	void SetBot(bool f_playingBot);
	char GetPlayer();
private:
	bool playingBot;
	char player;
	Tile board[9];
};