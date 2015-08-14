#ifndef WEZELPOMIARU_H
#define WEZELPOMIARU_H

#include <QObject>
#include <wezel.h>

class WezelPomiaru : public Wezel
{
public:
    WezelPomiaru();
    ~WezelPomiaru();
    virtual void aktualizujWidok(Widok *widok);
};

#endif // WEZELPOMIARU_H
