#ifndef WEZELKARTY_H
#define WEZELKARTY_H

#include <QObject>
#include <wezel.h>

class WezelKarty : public Wezel
{
public:
    WezelKarty();
    ~WezelKarty();
    virtual void aktualizujWidok(Widok *widok);
};

#endif // WEZELKARTY_H
