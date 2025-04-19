#ifndef DRACHE_H
#define DRACHE_H

#include <string>
#include <vector>

#include "drachenflug.h"

class Drache
{
private:
    std::string drachenName;
    std::string meinPlayer;
    double flugkosten;
    std::vector<Drachenflug*> drachenflugListe;
public:
    Drache();
    void drachenflugHinzufuegen();
    void passagierBuchen();
    void dracheAnzeigen();
    std::string getDrachenName() const;
};

#endif // DRACHE_H
