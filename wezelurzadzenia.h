#ifndef WEZELURZADZENIA_H
#define WEZELURZADZENIA_H

#include <QObject>
#include <wezel.h>

class WezelUrzadzenia : public Wezel
{
public:
    WezelUrzadzenia();
    ~WezelUrzadzenia();
    virtual void aktualizujWidok(Widok *widok);
};

#endif // WEZELURZADZENIA_H
