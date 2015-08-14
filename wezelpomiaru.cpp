#include "wezelpomiaru.h"
#include "widok.h"

#include <QDebug>

WezelPomiaru::WezelPomiaru()
{

}

WezelPomiaru::~WezelPomiaru()
{

}

void WezelPomiaru::aktualizujWidok(Widok *widok)
{
    qDebug() << "WezelPomiaru::aktualizujWidok(Widok*)" << widok;
    widok->aktualizuj(this);
}
