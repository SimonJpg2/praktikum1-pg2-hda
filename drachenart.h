#ifndef DRACHENART_H
#define DRACHENART_H

#include "drache.h"

#include <string>

class Nachtschatten : public Drache
{
public:
    Nachtschatten();
    Nachtschatten(const nlohmann::json& j);
    virtual ~Nachtschatten();

    virtual std::string getDrachenArt() const override;
};

class Tagschatten : public Drache
{
public:
    Tagschatten();
    Tagschatten(const nlohmann::json& j);
    virtual ~Tagschatten();

    virtual std::string getDrachenArt() const override;
};

class ToedlicherNadder : public Drache
{
public:
    ToedlicherNadder();
    ToedlicherNadder(const nlohmann::json& j);
    virtual ~ToedlicherNadder();

    virtual std::string getDrachenArt() const override;
};

class Skrill : public Drache
{
public:
    Skrill();
    Skrill(const nlohmann::json& j);
    virtual ~Skrill();

    virtual std::string getDrachenArt() const override;
};

#endif // DRACHENART_H
