#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy {

protected:
    const string NAZWA_PLIKU;

public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku){}
    fstream plikTekstowy;
    string pobierzNazwePliku();
    bool czyPlikJestPusty();
};

#endif
