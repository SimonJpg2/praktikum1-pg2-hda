#include "drachenflug.h"

#include <iostream>

Drachenflug::Drachenflug()
{
    std::cout << "Flugnummmer? ";
    std::cin >> this->flugNummer;

    std::cout << "Ziel? ";
    std::getline(std::cin, this->ziel);

    std::cout << "Entfernung der Reise angeben: ";
    std::cin >> this->entfernung;

    std::cout << "Die Drachenreise wurde erfolgreich erstellt." << std::endl;
}

void Drachenflug::flugDatenAnzeigen()
{

}

void Drachenflug::addPassagier()
{

}

double Drachenflug::getReisedauer() const
{
    return 0;
}

int Drachenflug::getFlugNummer() const
{
    return this->flugNummer;
}
