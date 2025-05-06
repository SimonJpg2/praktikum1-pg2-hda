#include "drache.h"

#include <iostream>
#include <limits>

double Drache::getGeschwindigkeit() const
{
    return geschwindigkeit;
}

double Drache::getAusdauer() const
{
    return ausdauer;
}

double Drache::getErholung() const
{
    return erholung;
}

double Drache::getDrachenPreis() const
{
    return drachenPreis;
}

std::string Drache::getDrachenArt() const
{
    return drachenArt;
}

Drache::Drache()
{
    std::cout << "Name des Drachen: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Puffer leeren, da sonst nächstes getLine() übersprungen wird.
    std::getline(std::cin, this->drachenName); // Eingabe ohne Leerzeichen

    std::cout << "Mein Player: ";
    std::getline(std::cin, this->meinPlayer);

    //Ausgabe zur Bestätigung
    std::cout << "\n\nName des Drachen: " << this->drachenName << " \nMein Player: " << this->meinPlayer << std::endl;
}

Drache::Drache(const nlohmann::json &json)
{
    this->drachenName = json["drachenName"];
    this->meinPlayer = json["meinPlayer"];
    this->geschwindigkeit = json["geschwindigkeit"];
    this->ausdauer = json["ausdauer"];
    this->erholung = json["erholung"];
    this->drachenPreis = json["drachenPreis"];
    this->drachenArt = json["drachenArt"];

    for (auto& f : json["drachenflugListe"])
        this->drachenflugListe.push_back(new Drachenflug(f));
}

Drache::~Drache()
{
    for (auto p_drachenflug : this->drachenflugListe)
        delete p_drachenflug;
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
    std::cout << "Drache " << this->getDrachenName()
              << " von " << this->meinPlayer
              << ":  " << this->geschwindigkeit
              << " km/h, Ausdauer=" << this->ausdauer
              << ", Erholung=" << this->erholung
              << ", Preis=" << this->drachenPreis
              << "\n\n";

    for (auto p_drachenflug : this->drachenflugListe)
        p_drachenflug->flugDatenAnzeigen();
}

std::string Drache::getDrachenName() const
{
    return this->drachenName;
}
