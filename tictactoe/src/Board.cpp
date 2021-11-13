#include "Tile.hpp"
#include "Board.hpp"
#include <iostream>

Board::Board() : board{ empty, empty, empty, empty, empty, empty, empty, empty, empty }, playingBot(false), player(1)
{
}

void Board::SetTile(char input)
{
	if (input < 49 || input > 58)
	{
		std::cout << "Invalid input!";
	}
	else
	{
		board[input - 49] = x;
	}
}

void Board::PrintBoard()
{
	std::cout << "-------------" << std::endl << '|';

	for (int i = 0; i < 9; i++)
	{
		if (i == 3 || i == 6)
		{
			std::cout << std::endl << "-------------" << std::endl << '|';
		}
		std::cout << ' ' << board[i] << ' ' << '|';
	}

	std::cout << std::endl << "-------------";
}

void Board::SetBot(bool f_playingBot)
{
	playingBot = f_playingBot;
}

char Board::GetPlayer()
{
	if (player == 1)
	{
		return 'X';
	}
	else if (player == 2)
	{
		return 'O';
	}
	else
	{
		return 'Bot';
	}
}