#include "wezelkarty.h"
#include "widok.h"

#include <QDebug>

WezelKarty::WezelKarty()
{

}

WezelKarty::~WezelKarty()
{

}

void WezelKarty::aktualizujWidok(Widok *widok)
{
    qDebug() << "WezelKarty::aktualizujWidok(Widok*)" << widok;
    widok->aktualizuj(this);
}
