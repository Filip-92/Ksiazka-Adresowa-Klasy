#include "AdresatMenadzer.h"

void AdresatMenadzer::wyswietlDaneAdresatow()
{
        for (int i = 0; i < adresaci.size(); i++)
    {
    cout << endl << "Id:                 " << adresaci[i].pobierzIdAdresata() << endl;
    cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
    cout << "Nazwisko:           " << adresaci[i].pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresaci[i].pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
    cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;
    }
}

void AdresatMenadzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika)
{
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}

Adresat AdresatMenadzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawIdAdresata(pobierzIdOstatniegoAdresata());
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    string imie = "";
    cout << "Podaj imie: ";
    cin >> imie;
    adresat.ustawImie(imie);
    //imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);

    string nazwisko = "";
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    adresat.ustawNazwisko(nazwisko);
    //adresat.ustawNazwisko; = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    string numerTelefonu = "";
    cout << "Podaj numer telefonu: ";
    cin >> numerTelefonu;
    adresat.ustawNumerTelefonu(numerTelefonu);

    string email = "";
    cout << "Podaj email: ";
    cin >> email;
    adresat.ustawEmail(email);

    string adres = "";
    cout << "Podaj adres: ";
    cin >> adres;
    adresat.ustawAdres(adres);

    return adresat;
}

int AdresatMenadzer::pobierzIdOstatniegoAdresata()
{
    if (adresaci.empty() == true)
        return 1;
    else
        return adresaci.back().pobierzIdAdresata() + 1;
}

int AdresatMenadzer::dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = AdresatMenadzer::podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}
