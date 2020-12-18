#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuUzytkownika();

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    vector <Adresat> adresaci;

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata = 0;

    char wybor;

    while (true)
    {
        if (idZalogowanegoUzytkownika == 0)
        {
            wybor = wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                system("cls");
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                system("cls");
                ksiazkaAdresowa.logowanieUzytkownika();
                if(ksiazkaAdresowa.czyUzytkownikJestZalogowany() == true)
                idZalogowanegoUzytkownika++;
                break;
             case '3':
                system("cls");
                ksiazkaAdresowa.dodajAdresata();
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
            wybor = wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
                {
                case '1':
                    system("cls");
                    ksiazkaAdresowa.dodajAdresata();
                    break;
                case '2':
                    ksiazkaAdresowa.wypiszWszystkichAdresatow();
                    break;
                case '3':
                    system("cls");
                    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                    break;
                case '4':
                    ksiazkaAdresowa.wylogowanieUzytkownika();
                    idZalogowanegoUzytkownika = 0;
                    break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
                }
            }
    }
}
return 0;
}

char wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "3. Dodaj adresata" << endl;
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

