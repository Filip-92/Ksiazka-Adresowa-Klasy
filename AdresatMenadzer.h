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
    vector <Adresat> adresaci;

    fstream plikTekstowy;
    string nazwaPlikuZAdresatami = "Adresaci.txt";
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);

   public:
    void wyswietlDaneAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};

#endif
