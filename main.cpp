#include <iostream>
#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuUzytkownika();

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    //vector <Uzytkownik> uzytkownicy;
    //vector <Adresat> adresaci;

    int idZalogowanegoUzytkownika = 0;
    int idOstatniegoAdresata = 0;

    char wybor;

    ksiazkaAdresowa.wczytajUzytkownikowZPliku();

    while (true)
    {
        if (idZalogowanegoUzytkownika == 0)
        {
            wybor = wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {

            /* if (adresaci.empty() == true)
                 // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                 // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                 // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
                 idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

             wybor = wybierzOpcjeZMenuUzytkownika();

             switch (wybor)
             {
             case '1':
                 idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
                 break;
             case '2':
                 wyswietlWszystkichAdresatow(adresaci);
                 break;
            case '3':
                 zmianaHaslaZalogowanegoUzytkownika
            case '4':
                 idZalogowanegoUzytkownika = 0;
                 adresaci.clear();
                 break;*/

            return 0;
        }
    }
}

char wybierzOpcjeZMenuGlownego()
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

char wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyswietl adresatow" << endl;
    cout << "---------------------------" << endl;
    cout << "3. Zmien haslo" << endl;
    cout << "4. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;

    return wybor;
}
