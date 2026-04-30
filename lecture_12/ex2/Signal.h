#pragma once

#include "State.h"
#include "Stop.h"
// #include "Go.h"
// #include "Ready.h"
// #include "Clear.h"

class Signal
{
    private:

    Stop _stopState;
    Stop _go;

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
    State getReady();
    State* getGo(){return goState; }
    State getClear();
    State* getStop(){return stopState; }
    void setState(State*);

};