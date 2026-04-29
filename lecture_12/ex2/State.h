#pragma once

#include "Signal.h"
class State
{
    private:
    State() = default;
    ~State() = default;

    public:
    virtual void shift_signal(Signal*) = 0;

};