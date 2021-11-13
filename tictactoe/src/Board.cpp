#include "Tile.hpp"
#include "Board.hpp"
#include <iostream>

	Board::Board() : board{ empty, empty, empty, empty, empty, empty, empty, empty, empty }
	{
	}

	void Board::SetTile()
	{
		board[1] = x;
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