#include "State.h"

class Stop : public State
{
    private:
    public:
    void shift_signal(Signal* signal) override;
};