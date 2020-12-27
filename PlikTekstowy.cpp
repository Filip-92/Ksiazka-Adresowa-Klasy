#include "PlikTekstowy.h"

string PlikTekstowy::pobierzNazwePliku()
{
    string NAZWA_PLIKU;

    return NAZWA_PLIKU;
}

bool PlikTekstowy::czyPlikJestPusty()
{
    fstream plikTekstowy;
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}
