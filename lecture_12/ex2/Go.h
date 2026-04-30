#pragma once
#include "State.h"

class Go : public State{
    private:
    public:
    void shift_signal(Signal* signal) override;
};