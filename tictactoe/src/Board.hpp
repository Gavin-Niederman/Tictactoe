#pragma once
#include "Tile.hpp"

class Board
{
public:
	Board();
	void SetTile(char input);	
	void SetBot(bool f_playingBot);
	void PrintBoard() const;
	char GetPlayer() const;
	int CheckForWin();
	void Reset();
private:
	bool playingBot;
	char player;
	Tile board[9];
};