#pragma once
#include "structs.cpp"

class SudokuSolver
{
private:
	sudokuBoard board;

public:
	SudokuSolver(sudokuBoard board) : board(board) { }
	bool solve();
};

