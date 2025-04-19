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
    void dialog();
    Drache* sucheDrache();
};

#endif // FILMSTUDIO_H
