#pragma once

#include <string>
#include "windows.h"

class Cursor {
public:
	Cursor();
	void cursorToXY(short x, short y) const;
private:
	HANDLE handleToConsoleWindow_;
};