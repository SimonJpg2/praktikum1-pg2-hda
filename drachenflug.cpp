#include "drachenflug.h"

#include <iostream>

inline static int naechsteNummer = 10000;

Drachenflug::Drachenflug()
{
    this->flugNummer = naechsteNummer;
    naechsteNummer++;

    std::cout << "Ziel? ";
    std::getline(std::cin, this->ziel);

    std::cout << "Entfernung der Reise angeben: ";
    std::cin >> this->entfernung;

    std::cout << "Die Drachenreise wurde erfolgreich erstellt." << std::endl;
}

Drachenflug::~Drachenflug()
{

}

void Drachenflug::flugDatenAnzeigen()
{
    std::cout << "[Drachenflug]\n\n";
    std::cout << "Flugnummer: " << this->getFlugNummer()
              << "\nZiel: " << this->ziel
              << "\nEntfernung: " << this->entfernung
              << "\nLadung: " << this->ladung
              << std::endl;

    std::cout << "\n[Passagiere]" << std::endl;
    for (auto passagier : this->passagierListe)
        std::cout << "Name des Passagiers: " << passagier << std::endl;
    std::cout << "\n";
}

void Drachenflug::addPassagier()
{
    std::string passagier;
    std::cout << "Name des Passagiers eingeben: ";
    std::cin >> passagier;

    this->passagierListe.push_back(passagier);
    std::cout << "Passagier mit dem Namen " << passagier << " wurde zum Flug hinzugefuegt." << std::endl;
}

double Drachenflug::getReisedauer() const
{
    return 0;
}

int Drachenflug::getFlugNummer() const
{
    return this->flugNummer;
}
