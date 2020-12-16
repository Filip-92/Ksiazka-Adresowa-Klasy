#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wczytajUzytkownikowZPliku()
{
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenadzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(vector <Uzytkownik> &uzytkownicy, int idZalogowanegoUzytkownika)
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wyswietlDaneAdresatow()
{
    adresatMenadzer.wyswietlDaneAdresatow();
}
