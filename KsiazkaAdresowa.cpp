#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
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

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    idZalogowanegoUzytkownika = uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
    adresatMenadzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresatMenadzer->wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyswietl adresatow" << endl;
    cout << "3. Wyszukaj po imieniu" << endl;
    cout << "4. Wyszukaj po nazwisku" << endl;
    cout << "5. Edytuj dane adresata" << endl;
    cout << "6. Usun adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;

    return wybor;
}

void KsiazkaAdresowa::wybierzOpcjeZMenuEdycja()
{
    adresatMenadzer->wybierzOpcjeZMenuEdycja();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenadzer->edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatMenadzer->usunAdresata();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu ()
{
    adresatMenadzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku ()
{
    adresatMenadzer->wyszukajAdresatowPoNazwisku ();
}
