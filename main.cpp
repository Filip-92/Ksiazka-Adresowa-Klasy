#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuUzytkownika();

int main()
{
    char wybor;

    //wybor = wybierzOpcjeZMenuGlownego();

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();



    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}

/*
int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    //vector <Uzytkownik> uzytkownicy;
    vector <Adresat> adresaci;

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
                ksiazkaAdresowa.logowanieUzytkownika();
                wybor = wybierzOpcjeZMenuUzytkownika();
                switch (wybor)
                {
                case '1':
                    ksiazkaAdresowa.dodajAdresata();
                    break;
                case '2':
                    ksiazkaAdresowa.wypiszWszystkichAdresatow();
                    break;
                case '3':
                    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                    break;
                case '4':
                    ksiazkaAdresowa.wylogowanieUzytkownika();
                    break;
                }
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

        return 0;
    }
}*/

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

