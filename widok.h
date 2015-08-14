#ifndef WIDOK_H
#define WIDOK_H

#include <QObject>

class WezelUrzadzenia;
class WezelPomiaru;
class WezelKarty;

class Widok
{
public:
    Widok();
    ~Widok();
    void aktualizuj(WezelUrzadzenia *wezelUrzadzenia);
    void aktualizuj(WezelPomiaru *wezelPomiaru);
    void aktualizuj(WezelKarty *wezelKarty);
};

#endif // WIDOK_H
