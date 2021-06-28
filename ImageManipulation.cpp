#include "ImageManipulation.h"

void ImageManipulation::getScreenshot()
{
	const int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	const int screenHeight = GetSystemMetrics(SM_CYSCREEN);
	HWND desktop = GetDesktopWindow();
	this->screenShot = GetDC(desktop);
}

void ImageManipulation::findBoard()
{
}

void ImageManipulation::getSquares()
{
}

void ImageManipulation::passToTesseract()
{
}
