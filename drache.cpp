#include "drache.h"

#include <iostream>

Drache::Drache()
{
    std::cout << "Name des Drachen: ";
    std::getline(std::cin, this->drachenName); // Eingabe ohne Leerzeichen

    std::cout << "Mein Player: ";
    std::getline(std::cin, this->meinPlayer);

    //Ausgabe zur Bestätigung
    std::cout << "Name des Drachen: " << this->drachenName << " \nMein Player: " << this->meinPlayer << std::endl;
}

void Drache::drachenflugHinzufuegen()
{

}

void Drache::passagierBuchen()
{

}

void Drache::dracheAnzeigen()
{

}

std::string Drache::getDrachenName() const
{
    return this->drachenName;
}
