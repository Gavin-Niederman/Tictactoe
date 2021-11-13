#include "Board.hpp"
#include <iostream>

Board board;

void MainLoop()
{
	board.SetBot(true);
	while (true)
	{
		board.SetTile();
		board.PrintBoard();	
		std::cin.get();
	}
}