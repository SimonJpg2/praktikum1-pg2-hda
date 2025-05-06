#include "drachenart.h"

Skrill::Skrill() : Drache()
{
    this->geschwindigkeit = 190.0;
    this->ausdauer = 5.25;
    this->erholung = 3.5;
    this->drachenPreis = 4200.0;
}

Skrill::Skrill(const nlohmann::json &j) : Drache(j)
{

}

Skrill::~Skrill()
{

}

std::string Skrill::getDrachenArt() const
{
    return "Skrill";
}
