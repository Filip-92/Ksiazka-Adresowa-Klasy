#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);
    int podajIdWybranegoAdresata();
    int pobierzZPlikuIdOstatniegoAdresata();
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);

public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {
    idOstatniegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    bool dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    int usunAdresata(vector <Adresat> &adresaci);
    void edytujAdresata(vector <Adresat> &adresaci);
    void edytujWybranegoAdresataWPliku(Adresat adresat);
    char wybierzOpcjeZMenuEdycja();
    void dopisz(string tekst);
    void wczytajIdOstatniegoAdresata(int Id);
};

#endif
