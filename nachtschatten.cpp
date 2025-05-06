#include "drachenart.h"

Nachtschatten::Nachtschatten() : Drache()
{
    this->geschwindigkeit = 160.0;
    this->ausdauer = 4.5;
    this->erholung = 1.75;
    this->drachenPreis = 5100.0;
}

Nachtschatten::~Nachtschatten()
{

}

std::string Nachtschatten::getDrachenArt() const
{
    return "Nachtschatten";
}
