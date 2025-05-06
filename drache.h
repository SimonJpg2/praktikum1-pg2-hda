#ifndef DRACHE_H
#define DRACHE_H

#include <string>
#include <vector>

#include "drachenflug.h"

class Drache
{
protected:
    std::string drachenName;
    std::string meinPlayer;
    double flugkosten;
    double geschwindigkeit;
    double ausdauer;
    double erholung;
    double drachenPreis;
    std::string drachenArt;
    std::vector<Drachenflug*> drachenflugListe;
public:
    Drache();
    virtual ~Drache();
    void drachenflugHinzufuegen();
    void passagierBuchen();
    void dracheAnzeigen();
    std::string getDrachenName() const;
    double getGeschwindigkeit() const;
    double getAusdauer() const;
    double getErholung() const;
    double getDrachenPreis() const;
    virtual std::string getDrachenArt() const;
};

#endif // DRACHE_H
