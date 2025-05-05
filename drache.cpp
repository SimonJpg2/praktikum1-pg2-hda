#include "drache.h"

#include <iostream>

Drache::Drache()
{
    std::cout << "Name des Drachen: ";
    std::getline(std::cin, this->drachenName); // Eingabe ohne Leerzeichen

    std::cout << "Mein Player: ";
    std::getline(std::cin, this->meinPlayer);

    //Ausgabe zur Bestätigung
    std::cout << "\n\nName des Drachen: " << this->drachenName << " \nMein Player: " << this->meinPlayer << std::endl;
}

void Drache::drachenflugHinzufuegen()
{
    Drachenflug* p_flug = new Drachenflug();
    this->drachenflugListe.push_back(p_flug);
}

void Drache::passagierBuchen()
{
    int flugnummer;

    std::cout << "Flugnummer eingeben: ";
    std::cin >> flugnummer;

    for (auto p_drachenflug : this->drachenflugListe)
    {
        if (p_drachenflug->getFlugNummer() == flugnummer)
        {
            p_drachenflug->addPassagier();
            return;
        }
    }
    std::cout << "Drachenflug existiert nicht." << std::endl;
}

void Drache::dracheAnzeigen()
{
    std::cout << "Drache " << this->getDrachenName() << " von " << this->meinPlayer << ":\n\n";
    for (auto p_drachenflug : this->drachenflugListe)
        p_drachenflug->flugDatenAnzeigen();
}

std::string Drache::getDrachenName() const
{
    return this->drachenName;
}
