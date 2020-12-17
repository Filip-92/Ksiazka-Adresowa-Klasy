#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenadzer.h"
#include "PlikZUzytkownikami.h"
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
UzytkownikMenadzer uzytkownikMenadzer;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami) {
        uzytkownikMenadzer.wczytajUzytkownikowZPliku();
        };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void wczytajUzytkownikowZPliku();
    void zmianaHaslaZalogowanegoUzytkownika(vector <Uzytkownik> &uzytkownicy, int idZalogowanegoUzytkownika);

};

#endif
