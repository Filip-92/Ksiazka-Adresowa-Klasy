#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    vector <Adresat> adresaci;

    char wybor;

    while (true)
    {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == false)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                system("cls");
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                system("cls");
                ksiazkaAdresowa.logowanieUzytkownika();
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
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

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
                    ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                    break;
                case '4':
                    system("cls");
                    ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                    break;
                case '5':
                    system("cls");
                    ksiazkaAdresowa.edytujAdresata();
                    break;
                case '6':
                    system("cls");
                    ksiazkaAdresowa.usunAdresata();
                    break;
                case '7':
                    system("cls");
                    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                    break;
                case '8':
                    ksiazkaAdresowa.wylogowanieUzytkownika();
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

