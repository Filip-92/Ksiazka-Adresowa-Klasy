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

Adresat AdresatMenadzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawIdAdresata = ++idOstatniegoAdresata;
    adresat.ustawIdUzytkownika = idZalogowanegoUzytkownika;

    string imie = "";
    cout << "Podaj imie: ";
    cin >> imie;
    adresat.ustawImie;
    adresat.ustawImie; = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    string nazwisko = "";
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    adresat.ustawNazwisko;
    adresat.ustawNazwisko; = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    string numerTelefonu = "";
    cout << "Podaj numer telefonu: ";
    cin >> numerTelefonu;
    adresat.ustawNumerTelefonu;

    string email = "";
    cout << "Podaj email: ";
    cin >> email;
    adresat.ustawEmail;

    string adres = "";
    cout << "Podaj adres: ";
    cin >> adres;
    adresat.ustawAdres;

    return adresat;
}
