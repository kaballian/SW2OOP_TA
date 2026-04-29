#pragma once

#include "State.h"
class Signal
{
    private:
    State* stopState;
    State* readyState;
    State* clearState;
    State* goState;
    State* current_state;

    public:
    Signal() : stopState(nullptr), readyState(nullptr), clearState(nullptr), 
    goState(nullptr), current_state(nullptr){}

    ~Signal();


    void shift();
    State getReady(){return this->readyState};
    State getGo();
    State getClear();
    State getStop();
    void setState(State*);

};