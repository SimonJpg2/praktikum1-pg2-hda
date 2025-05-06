#ifndef FILMSTUDIO_H
#define FILMSTUDIO_H

#include <vector>

#include "drache.h"
#include "json.hpp"

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
    void einlesenJSON(const std::string& filename);
    void speichernJSON(const std::string& filename);
};

#endif // FILMSTUDIO_H
