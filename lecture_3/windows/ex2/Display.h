#pragma once
#include "Cursor.h"
class Display {
public:
	Display(short);
	void update(int) const;
private:
    const Cursor cursor;
	int id_number_; // valid values : 1, 2, 3
};
