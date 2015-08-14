#include "wezelurzadzenia.h"
#include "widok.h"

#include <QDebug>

WezelUrzadzenia::WezelUrzadzenia()
{

}

WezelUrzadzenia::~WezelUrzadzenia()
{

}

void WezelUrzadzenia::aktualizujWidok(Widok *widok)
{
    qDebug() << "WezelUrzadzenia::aktualizujWidok(Widok*)" << widok;
    widok->aktualizuj(this);
}
