#ifndef DRACHENART_H
#define DRACHENART_H

#include "drache.h"
#include <string>

class Nachtschatten : public Drache
{
public:
    Nachtschatten();
    virtual ~Nachtschatten();

    virtual std::string getDrachenArt() const override;
};

class Tagschatten : public Drache
{
public:
    Tagschatten();
    virtual ~Tagschatten();

    virtual std::string getDrachenArt() const override;
};

class ToedlicherNadder : public Drache
{
public:
    ToedlicherNadder();
    virtual ~ToedlicherNadder();

    virtual std::string getDrachenArt() const override;
};

class Skrill : public Drache
{
public:
    Skrill();
    virtual ~Skrill();

    virtual std::string getDrachenArt() const override;
};

#endif // DRACHENART_H
