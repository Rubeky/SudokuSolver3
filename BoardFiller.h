#pragma once
#include "structs.cpp"

class BoardFiller
{
private:
	sudokuBoard board;

public:
	BoardFiller(sudokuBoard board) : board(board) { }
	void fill();
};

