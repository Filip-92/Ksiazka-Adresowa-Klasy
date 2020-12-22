#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    //PlikZAdresatami plikZAdresatami("Adresaci.txt");

    //PlikZUzytkownikami plikZUzytkownikami("Uzytkownicy.txt");

    vector <Adresat> adresaci;

    int idZalogowanegoUzytkownika;

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
                    ksiazkaAdresowa.edytujAdresata();
                    break;
                case '4':
                    system("cls");
                    ksiazkaAdresowa.usunAdresata();
                    break;
                case '5':
                    system("cls");
                    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                    break;
                case '6':
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

