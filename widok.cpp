#include "widok.h"
#include "wezelurzadzenia.h"
#include "wezelpomiaru.h"
#include "wezelkarty.h"

#include <QDebug>

Widok::Widok()
{

}

Widok::~Widok()
{

}

void Widok::aktualizuj(WezelUrzadzenia *wezelUrzadzenia)
{
    qDebug() << "Widok::aktualizuj(WezelUrzadzenia*)" << wezelUrzadzenia;
}

void Widok::aktualizuj(WezelPomiaru *wezelPomiaru)
{
    qDebug() << "Widok::aktualizuj(WezelPomiaru*)" << wezelPomiaru;
}

void Widok::aktualizuj(WezelKarty *wezelKarty)
{
    qDebug() << "Widok::aktualizuj(WezelKarty*)" << wezelKarty;
}
