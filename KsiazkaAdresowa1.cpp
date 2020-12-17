#include "KsiazkaAdresowa1.h"

void KsiazkaAdresowa1::wyswietlDaneAdresatow()
{
    adresatMenadzer.wyswietlDaneAdresatow();
}

int KsiazkaAdresowa1::dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    adresatMenadzer.dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
}

void KsiazkaAdresowa1::adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika)
{
    adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}
