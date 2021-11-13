#include "Board.hpp"
#include <iostream>

char userInput;

Board board;

void MainLoop()
{
	board.SetBot(true);
	while (true)
	{
		board.PrintBoard();	
		std::cout << std::endl << board.GetPlayer() << " is up" << std::endl << "Select a tile:";
		std::cin >> userInput;
		board.SetTile(userInput);
	}
}