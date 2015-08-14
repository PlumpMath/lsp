#include <QCoreApplication>
#include <QDebug>

#include "wezelurzadzenia.h"
#include "wezelpomiaru.h"
#include "wezelkarty.h"
#include "widok.h"

int main()
{
    Wezel * wezel = 0;
    WezelUrzadzenia wezelUrzadzenia;
    WezelPomiaru wezelPomiaru;
    WezelKarty wezelKarty;
    Widok widok;

    qDebug()<<"Zgodne z zasada podstawienia Liskov (Liskov substitution principle).";
    wezel = &wezelUrzadzenia;
    wezel->aktualizujWidok(&widok);
    wezel = &wezelPomiaru;
    wezel->aktualizujWidok(&widok);
    wezel = &wezelKarty;
    wezel->aktualizujWidok(&widok);

    qDebug()<<"Niezgodne z zasada podstawienia Liskov (Liskov substitution principle).";
    qDebug()<<"Uzycie dynamicznego rzutowania.";
    wezel = &wezelUrzadzenia;
    widok.aktualizuj(dynamic_cast<WezelUrzadzenia*>(wezel));
    widok.aktualizuj(dynamic_cast<WezelPomiaru*>(wezel));
    widok.aktualizuj(dynamic_cast<WezelKarty*>(wezel));
    wezel = &wezelPomiaru;
    widok.aktualizuj(dynamic_cast<WezelUrzadzenia*>(wezel));
    widok.aktualizuj(dynamic_cast<WezelPomiaru*>(wezel));
    widok.aktualizuj(dynamic_cast<WezelKarty*>(wezel));
    wezel = &wezelKarty;
    widok.aktualizuj(dynamic_cast<WezelUrzadzenia*>(wezel));
    widok.aktualizuj(dynamic_cast<WezelPomiaru*>(wezel));
    widok.aktualizuj(dynamic_cast<WezelKarty*>(wezel));

    return 0;
}
