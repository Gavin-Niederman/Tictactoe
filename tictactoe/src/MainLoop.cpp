#include "Board.hpp"
#include <iostream>

Board board;

void MainLoop()
{
	while (true)
	{
		board.SetTile();
		board.PrintBoard();	
		std::cin.get();
	}
}