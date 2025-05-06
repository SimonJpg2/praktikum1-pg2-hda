#include "drachenart.h"

ToedlicherNadder::ToedlicherNadder() : Drache()
{
    this->geschwindigkeit = 140.0;
    this->ausdauer = 7.5;
    this->erholung = 1.5;
    this->drachenPreis = 3750.0;
}

ToedlicherNadder::ToedlicherNadder(const nlohmann::json &j) : Drache(j)
{

}

ToedlicherNadder::~ToedlicherNadder()
{

}

std::string ToedlicherNadder::getDrachenArt() const
{
    return "ToedlicherNadder";
}
