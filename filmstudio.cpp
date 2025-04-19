#include "filmstudio.h"

#include <iostream>

Filmstudio::Filmstudio() {}

void Filmstudio::dialog() {

    char eingabe;

    while (true){

        std::cout << std::endl;
        std::cout << "1: Drache hinzufuegen" << std::endl;
        std::cout << "2: Drachenflug hinzufuegen" << std::endl;
        std::cout << "3: Passagier buchen" << std::endl;
        std::cout << "4: Alle Drachen anzeigen" << std::endl;
        std::cout << "0: Programm beenden" << std::endl;

        std::cin >> eingabe;

        switch(eingabe){
        case '1':{         // Aufgabe 1e: Drache hinzufuegen
            // ******************************** Drache hinzufuegen ********************************
            Drache* pDrache = new Drache();
            drachenListe.push_back(pDrache);
            break;
        }

        case '2':{         // Aufgabe 1f: Drachenflug hinzufuegen
            // ******************************** Drachenflug hinzufuegen ********************************
            Drache* d = sucheDrache();
            if(d != nullptr)
                d->drachenflugHinzufuegen();

            break;
        }

        case '3':{         // Aufgabe 1g: Passagier buchen
            // ******************************** Passagier buchen ********************************
            Drache* d = sucheDrache();
            if(d != nullptr)
                d->passagierBuchen();

            break;
        }

        case '4':{         // Aufgabe 1h: Alle Drachen anzeigen
            // ******************************** Alle Drachen anzeigen ********************************
            if(drachenListe.size()==0)
                std::cout << "Drachenliste ist noch leer" << std::endl;
            else {
                for(auto d : drachenListe){
                    d->dracheAnzeigen();
                    std::cout << "------------------------------------------------------------------" << std::endl;
                }
            }
            break;
        }

        case '0':{         // Programm beenden
            return;
        }

        default:
            std::cout << "Ungueltige Eingabe" << std::endl;
        }
    }
}

Drache *Filmstudio::sucheDrache()
{
    return nullptr;
}
