#include "filmstudio.h"
#include "drachenart.h"

#include <iostream>
#include <string>
#include <limits>

Filmstudio::Filmstudio() {}

Filmstudio::~Filmstudio()
{
    for (auto p_drache : this->drachenListe)
        delete p_drache;
    std::cout << "Eywa hat dich erhoert!" << std::endl;
}

void Filmstudio::dialog() {

    char eingabe;

    while (true)
    {
        std::cout << std::endl;
        std::cout << "1: Drache hinzufuegen" << std::endl;
        std::cout << "2: Drachenflug hinzufuegen" << std::endl;
        std::cout << "3: Passagier buchen" << std::endl;
        std::cout << "4: Alle Drachen anzeigen" << std::endl;
        std::cout << "0: Programm beenden" << std::endl;

        std::cin >> eingabe;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Puffer leeren, da sonst nächstes getLine() übersprungen wird.

        switch (eingabe){
            case '1': {         // Aufgabe 1e: Drache hinzufuegen
                Drache* p_drache = auswahlDrachenArt();
                this->drachenListe.push_back(p_drache);
            } break;

            case '2': {         // Aufgabe 1f: Drachenflug hinzufuegen
                Drache* p_drache = sucheDrache();

                if (p_drache != nullptr)
                    p_drache->drachenflugHinzufuegen();
            } break;

            case '3':{         // Aufgabe 1g: Passagier buchen
                Drache* p_drache = sucheDrache();

                if (p_drache != nullptr)
                    p_drache->passagierBuchen();
            } break;

            case '4':{         // Aufgabe 1h: Alle Drachen anzeigen
                if (drachenListe.size()==0)
                    std::cout << "Drachenliste ist noch leer" << std::endl;
                else
                {
                    for (auto p_drache : drachenListe)
                    {
                        p_drache->dracheAnzeigen();
                        std::cout << "------------------------------------------------------------------" << std::endl;
                    }
                }
            } break;

            case '0': return;
            default: std::cout << "Ungueltige Eingabe" << std::endl;
        }
    }
}

Drache *Filmstudio::sucheDrache()
{
    std::string name;
    std::cout << "Name des zu suchenden Drachen eingeben: ";
    std::getline(std::cin, name);

    for (const auto p_drache : this->drachenListe)
        if (p_drache->getDrachenName() == name)
            return p_drache;

    std::cout << "Der Drache mit dem Namen " << name << " konnte nicht gefunden werden." << std::endl;
    return nullptr;
}

// ********************************* Aufgabe 2c *********************************

Drache* Filmstudio::auswahlDrachenArt() {
    Drache* pD;
    char eingabe;

    do{
        std::cout << "Drachenart?" << std::endl;
        std::cout << "a: Nachtschatten" << std::endl;
        std::cout << "b: Tagschatten" << std::endl;
        std::cout << "c: ToedlicherNadder" << std::endl;
        std::cout << "d: Skrill" << std::endl;

        std::cin >> eingabe;

        switch (eingabe) {
            case 'a': case 'A':
                pD = new Nachtschatten(); break;
            case 'b': case 'B':
                pD = new Tagschatten(); break;
            case 'c': case 'C':
                pD = new ToedlicherNadder(); break;
            case 'd': case 'D':
                pD = new Skrill(); break;
            default:
                pD = nullptr;
                std::cout << "Ungueltige Eingabe, bitte erneut eingeben" << std::endl;
        }
    } while (pD == nullptr);
    return pD;
}

