#include "Board.hpp"
#include <iostream>

char userInput;
bool hasWon = false;
Board board;

void MainLoop()
{
	board.SetBot(false);
	while (hasWon == false)
	{
		board.PrintBoard();	
		std::cout << std::endl << board.GetPlayer() << " is up" << std::endl << "Select a tile:";
		std::cin >> userInput;
		board.SetTile(userInput);
		hasWon = board.CheckForWin();
	}
}