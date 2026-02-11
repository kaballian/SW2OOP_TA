#include <iostream>
#include "Display.h"
#include "Cursor.h"

Display::Display(const short id_number) :
        id_number_((id_number > 0 && id_number < 4 ? id_number : 0)), cursor(Cursor{}) {
    cursor.cursorToXY(static_cast<short>(12 * id_number_ - 7), 8);
    std::cout << "Counter " + std::to_string(id_number);
    update(99);
}

void Display::update(const int number) const {
    cursor.cursorToXY(static_cast<short>(12 * id_number_ - 5), 9);
    std::cout << (number < 10 ? "0" : "") << number << std::endl << std::endl;
}