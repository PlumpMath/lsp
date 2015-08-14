#include <iostream>
using namespace std;

class WezelUrzadzenia;
class WezelPomiaru;
class WezelKarty;

class Widok
{
public:
    void aktualizuj(WezelUrzadzenia *wezelUrzadzenia)
    {
        cout << "Widok::aktualizuj(WezelUrzadzenia*) " << wezelUrzadzenia << endl;
    }
    void aktualizuj(WezelPomiaru *wezelPomiaru)
    {
        cout << "Widok::aktualizuj(WezelPomiaru*) " << wezelPomiaru << endl;
    }
    void aktualizuj(WezelKarty *wezelKarty)
    {
        cout << "Widok::aktualizuj(WezelKarty*) " << wezelKarty << endl;
    }
};

class Wezel
{
public:
    virtual void aktualizujWidok(Widok *widok)
    {
        cout << "Wezel::aktualizujWidok(Widok*) " << widok << endl;
    }
};

class WezelUrzadzenia : public Wezel
{
public:
    virtual void aktualizujWidok(Widok *widok)
    {
        cout << "WezelUrzadzenia::aktualizujWidok(Widok*) " << widok << endl;
        widok->aktualizuj(this);
    }
};

class WezelPomiaru : public Wezel
{
public:
    virtual void aktualizujWidok(Widok *widok)
    {
        cout << "WezelPomiaru::aktualizujWidok(Widok*) " << widok << endl;
        widok->aktualizuj(this);
    }
};

class WezelKarty : public Wezel
{
public:
    virtual void aktualizujWidok(Widok *widok)
    {
        cout << "WezelKarty::aktualizujWidok(Widok*) " << widok << endl;
        widok->aktualizuj(this);
    }
};

int main ()
{
    Wezel * wezel = 0;
    WezelUrzadzenia wezelUrzadzenia;
    WezelPomiaru wezelPomiaru;
    WezelKarty wezelKarty;
    Widok widok;

    cout << "Zgodne z zasada podstawienia Liskov";
    cout << " (Liskov substitution principle)." << endl;
    wezel = &wezelUrzadzenia;
    wezel->aktualizujWidok(&widok);
    wezel = &wezelPomiaru;
    wezel->aktualizujWidok(&widok);
    wezel = &wezelKarty;
    wezel->aktualizujWidok(&widok);

    cout << "Niezgodne z zasada podstawienia Liskov";
    cout << " (Liskov substitution principle)." << endl;
    cout << "Uzycie dynamicznego rzutowania." << endl;
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


