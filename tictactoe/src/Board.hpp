#pragma once
#include "Tile.hpp"

class Board
{
public:
	Board();
	void SetTile(char input);
	void PrintBoard() const;
	void SetBot(bool f_playingBot);
	char GetPlayer() const;
private:
	bool playingBot;
	char player;
	Tile board[9];
};