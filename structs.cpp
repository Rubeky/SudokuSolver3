struct Rect {
	int x = 0;
	int y = 0;
};

struct sudokuBoard {
	int numbers[9][9] = { 0 };
	Rect boardPos;
};