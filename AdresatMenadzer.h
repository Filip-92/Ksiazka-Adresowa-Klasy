#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <Windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenadzer.h"

using namespace std;

class AdresatMenadzer
{
	const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
	vector <Adresat> adresaci;

	Adresat podajDaneNowegoAdresata();
	void wyswietlDaneAdresata(Adresat adresat);
	void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
	PlikZAdresatami plikZAdresatami;

public:
	AdresatMenadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) :
		plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
	{
		adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
	}
	void dodajAdresata();
	void wyswietlWszystkichAdresatow();
	void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
	int podajIdWybranegoAdresata();
	char wybierzOpcjeZMenuEdycja();
	void edytujAdresata();
	int usunAdresata();
    void wyszukajAdresatowPoImieniu ();
	void wyszukajAdresatowPoNazwisku ();
	void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
};

#endif
