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
    std::cout << "[Drachenflug]" << std::endl;
    std::cout << "Flugnummer: " << this->getFlugNummer() << " \nZiel: " << this->ziel << " \n Entfernung: " << this->entfernung << "\nLadung: " << this->ladung << std::endl;

    std::cout << "[Passagiere]" << std::endl;
    for (auto passagier : this->passagierListe)
        std::cout << "Name des Passagiers: " << passagier << std::endl;
}

void Drachenflug::addPassagier()
{
    std::string passagier;
    std::cout << "Name des Passagiers eingeben:";
    std::cin >> passagier;

    this->passagierListe.push_back(passagier);
    std::cout << "Passagier wurde zum Flug hinzugefügt." << std::endl;
}

double Drachenflug::getReisedauer() const
{
    return 0;
}

int Drachenflug::getFlugNummer() const
{
    return this->flugNummer;
}
