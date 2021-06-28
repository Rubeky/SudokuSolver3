#pragma once
#include "structs.cpp"
#include <windows.h>

class ImageManipulation
{
private:
	sudokuBoard board;
	HDC screenShot;

public:
	ImageManipulation(sudokuBoard board) : board(board) { getScreenshot(); }
	void getScreenshot();
	void findBoard();
	void getSquares();
	void passToTesseract();
};

