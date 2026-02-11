#include "Cursor.h"

Cursor::Cursor() {
	handleToConsoleWindow_ = GetStdHandle(STD_OUTPUT_HANDLE);
}
// Upper left corner is (0,0).
// x-axis is horizontal left to right. y-axis is vertical top to bottom
void Cursor::cursorToXY(const short x, const short y) const {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handleToConsoleWindow_, pos);
}

