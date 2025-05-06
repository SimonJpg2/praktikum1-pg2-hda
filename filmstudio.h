#ifndef FILMSTUDIO_H
#define FILMSTUDIO_H

#include <vector>

#include "drache.h"

class Filmstudio
{
private:
    std::vector<Drache*> drachenListe;
public:
    Filmstudio();
    ~Filmstudio();
    void dialog();
    Drache* sucheDrache();
    Drache* auswahlDrachenArt();
};

#endif // FILMSTUDIO_H
