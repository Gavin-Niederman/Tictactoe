#pragma once
#include "Tile.hpp"

class Board
{
public:
	Board();

	void SetTile();

	void PrintBoard();

private:
	bool playingBot;
	Tile board[9];
	int test;
};