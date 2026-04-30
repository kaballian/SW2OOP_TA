#include "Stop.h"

void Stop::shift_signal(Signal* signal)
{
    signal->setState(signal->getStop());
}
