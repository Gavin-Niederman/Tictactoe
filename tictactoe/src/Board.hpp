#pragma once
#include "Tile.hpp"

class Board
{
public:
	Board();

	void SetTile();

	void PrintBoard();

	void SetBot(bool f_playingBot);

private:
	bool playingBot;
	Tile board[9];
};