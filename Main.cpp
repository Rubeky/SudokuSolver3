#include "ImageManipulation.h"
#include "SudokuSolver.h"
#include "BoardFiller.h"
#include "structs.cpp"

int main()
{
	//Initialise board
	sudokuBoard board;

	//Fill in given sudoku board using OCR
	ImageManipulation IM(board);
	IM.findBoard();
	IM.getSquares();
	IM.passToTesseract();

	//Solving the sudoku with a solver
	SudokuSolver SS(board);
	SS.solve();

	//Entering solved board into the window using keys and mouse
	BoardFiller BF(board);
	BF.fill();
}