#pragma once
#include <string>
#include "Dato.h"
class Parkeringsbøde
{
private:
    std::string sted;
    double beløb;
    bool trukketTilbage;
    Dato dato;

public:
    Parkeringsbøde() = default;
    Parkeringsbøde(std::string sted, double beløb, Dato dato)
    : sted(sted), beløb(beløb), dato(dato) 
    {}

    std::string getSted(){return this->sted;}
    double getBeløb() {return this->beløb;}
    Dato& getDato() {return this->dato;}
    bool isTrukketTilbage() {return this->trukketTilbage;}
    

};