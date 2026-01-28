#pragma once
#include <string>
#include "Parkeringsbøde.h"
#include <vector>

class Bilejer
{
private:
    std::string navn;
    std::string adresse;
    std::vector<Parkeringsbøde> pbøder;

public:
    Bilejer() = default;
    Bilejer(std::string adresse) : adresse(adresse) {}

    void tilføjBøde(std::string navn, double beløb, Dato dato);
    std::vector<Parkeringsbøde>& hentAlleBøder();
    double avgBøde();
    double sumBøde();
};