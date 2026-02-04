#pragma once
#include "Logger.h"
#include "Signals.h"


class Sensor
{

private:
    Logger& log;
    Signals signal;

public:
    Sensor();
    Sensor(Logger& log, const Signals& signal) : log(log), signal(signal){}

    void detect(const Signals &sig)const{log.write_in(sig.to_string());}
};