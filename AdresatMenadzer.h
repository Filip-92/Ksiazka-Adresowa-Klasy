#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "Uzytkownik.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

    fstream plikTekstowy;
    string nazwaPlikuZAdresatami = "Adresaci.txt";
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    PlikZAdresatami plikZAdresatami;

   public:
    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    void wyswietlDaneAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    int pobierzIdOstatniegoAdresata();
};

#endif
