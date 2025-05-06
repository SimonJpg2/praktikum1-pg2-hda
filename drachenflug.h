#ifndef DRACHENFLUG_H
#define DRACHENFLUG_H

#include "json.hpp"

#include <string>
#include <vector>

class Drachenflug
{
private:
    int flugNummer;
    std::string ziel;
    double entfernung;
    double ladung = 0.0;
    std::vector<std::string> passagierListe;
public:
    Drachenflug();
    Drachenflug(const nlohmann::json& j);
    ~Drachenflug();
    void flugDatenAnzeigen();
    void addPassagier();
    int getFlugNummer() const;
    double getReisedauer() const;
};

#endif // DRACHENFLUG_H
