#include "Go.h"


void Go::shift_signal(Signal* signal)
{
    signal->setState(signal->getGo());
}