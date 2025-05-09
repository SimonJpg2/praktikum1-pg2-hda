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

Drachenflug::Drachenflug(const nlohmann::json &j)
{
    this->flugNummer = j["flugNummer"];

    if (this->flugNummer > naechsteNummer)
        naechsteNummer = this->flugNummer;
    naechsteNummer++;

    this->ziel = j["ziel"];
    this->entfernung = j["entfernung"];
    this->ladung = j["ladung"];
    this->passagierListe = j["passagiere"].get<std::vector<std::string>>();
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

nlohmann::json Drachenflug::to_json()
{
    nlohmann::json j;

    j["flugNummer"] = this->flugNummer;
    j["ziel"] = this->ziel;
    j["entfernung"] = this->entfernung;
    j["ladung"] = this->ladung;
    j["passagiere"] = this->passagierListe;

    return j;
}

int Drachenflug::getFlugNummer() const
{
    return this->flugNummer;
}
