#include "Board.hpp"
#include <iostream>

char userInput;
bool hasWon = false;
Board board;

void MainLoop()
{
	while (true)
	{
		std::cout << "Do you want to play the bot? 1 for yes, anything else for no:";
		std::cin >> userInput;
		if (userInput == 49)
		{
			board.SetBot(true);
		}
		else
		{
			board.SetBot(false);
		}

		while (hasWon == false)
		{
			board.PrintBoard();
			std::cout << std::endl << board.GetPlayer() << " is up" << std::endl << "Select a tile:";
			std::cin >> userInput;
			board.SetTile(userInput);
			
			if (board.CheckForWin() == 1)
			{
				board.PrintBoard();
				std::cout << "O wins!" << std::endl;
				hasWon = true;
			}
			else if (board.CheckForWin() == 2)
			{
				board.PrintBoard();
				std::cout << "X wins!" << std::endl;
				hasWon = true;
			}
			else if (board.CheckForWin() == 3)
			{
				board.PrintBoard();
				std::cout << "Draw!" << std::endl;
				hasWon = true;
			}
			else if (board.CheckForWin() == 4)
			{
				board.PrintBoard();
				std::cout << "Bot wins!" << std::endl;
				hasWon = true;
			}
		}
		std::cout << "Again? 1 for yes anything else for no:";
		std::cin >> userInput;
		if (userInput != 49)
		{
			break;
		}
		board.Reset();
		hasWon = false;
	}
}