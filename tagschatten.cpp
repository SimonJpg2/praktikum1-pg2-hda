#include "drachenart.h"

Tagschatten::Tagschatten() : Drache()
{
    this->geschwindigkeit = 170.0;
    this->ausdauer = 6.75;
    this->erholung = 2.25;
    this->drachenPreis = 3500.0;
}

Tagschatten::Tagschatten(const nlohmann::json &j) : Drache(j)
{

}

Tagschatten::~Tagschatten()
{

}

std::string Tagschatten::getDrachenArt() const
{
    return "Tagschatten";
}
