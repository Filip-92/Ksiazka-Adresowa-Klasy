#ifndef UZYTKOWNIKMENADZER_H
#define UZYTKOWNIKMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenadzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    fstream plikTekstowy;
    string nazwaPlikuZUzytkownikami = "Uzytkownicy.txt";

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

  public:
    UzytkownikMenadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(vector <Uzytkownik> &uzytkownicy, int idZalogowanegoUzytkownika);
};

#endif
