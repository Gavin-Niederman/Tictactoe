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
		std::cout << "Invalid input!" << std::endl;
	}
	else if (board[input - 49] != empty)
	{
		std::cout << "Invalid input! You selected a filled in tile!" << std::endl;		
	}
	else
	{
		if (player == 1)
		{
			board[input - 49] = x;
		}
		else
		{
			board[input - 49] = o;
		}

		if (player == 1)
		{
			if (playingBot == true)
			{
				player = 3;
			}
			else
			{
				player = 2;
			}
		}
		else if (player == 2)
		{
			player = 1;
		}
		else
		{
			player = 1;
		}
	}
}

void Board::PrintBoard() const
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

char Board::GetPlayer() const
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
		return 'B';			   
	}						   
}							   
							   
bool Board::CheckForWin()
{	
	//Rows
	if (board[0] == board[1] && board[2] == board[0] && board[0] != empty ||
		board[3] == board[4] && board[5] == board[3] && board[3] != empty ||
		board[6] == board[7] && board[8] == board[6] && board[6] != empty)
	{
		return true;
	}
	//Columns
	if (board[0] == board[3] && board[6] == board[0] && board[0] != empty ||
		board[1] == board[4] && board[7] == board[1] && board[1] != empty ||
		board[2] == board[5] && board[8] == board[2] && board[2] != empty)
	{
		return true;
	}
	//diagonals
	if (board[6] == board[4] && board[2] == board[6] && board[6] != empty ||
		board[0] == board[4] && board[8] == board[0] && board[0] != empty)
	{
		return true;
	}

	return false;
}