#ifndef KSIAZKAADRESOWA1_H
#define KSIAZKAADRESOWA1_H

#include <iostream>

#include "MetodyPomocnicze.h"
#include "Adresat.h"
#include "AdresatMenadzer.h"
#include "PlikZAdresatami.h"

using namespace std;

class KsiazkaAdresowa1
{
AdresatMenadzer adresatMenadzer;

public:
    KsiazkaAdresowa1(string nazwaPlikuZAdresatami) : adresatMenadzer(nazwaPlikuZAdresatami) {
    adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
    };
    //vector <Adresat> adresaci;
    //int idZalogowanegoUzytkownika;
    void wyswietlDaneAdresatow();
    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);

};

#endif
