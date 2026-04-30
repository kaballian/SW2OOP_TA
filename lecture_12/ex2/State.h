#pragma once

#include "Signal.h"
class State
{
    protected:
    State() = default;
    ~State() = default;

    public:
    virtual void shift_signal(Signal*) = 0;

};