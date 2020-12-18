#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wczytajUzytkownikowZPliku()
{
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
	uzytkownikMenadzer.logowanieUzytkownika();

	if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
	{
		adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
	}
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
	uzytkownikMenadzer.wylogujUzytkownika();
	delete adresatMenadzer;
	adresatMenadzer = NULL;
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
    {
        adresatMenadzer -> dodajAdresata();
    }
    else
    {
        cout << "Zaloguj sie by dodac adresata." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
    adresatMenadzer->wyswietlWszystkichAdresatow();
}
