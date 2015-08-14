#ifndef WEZEL_H
#define WEZEL_H

#include <QObject>

class Widok;

class Wezel
{
public:
    Wezel();
    ~Wezel();
    virtual void aktualizujWidok(Widok *widok) = 0;
};

#endif // WEZEL_H
