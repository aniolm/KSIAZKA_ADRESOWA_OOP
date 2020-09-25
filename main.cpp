#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

#include "KsiazkaAdresowa.h"
#include "Uzytkownik.h"
#include "Adresat.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    //ksiazka.wczytajUzytkownikowZPliku();

    while (true)
    {
        if (ksiazka.uzytkownikManager.pobierzIdZalogowanegoUzytkownika() == 0)
        {
          wybor = ksiazka.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazka.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazka.logowanieUzytkownika();
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

            if (ksiazka.adresatManager.czyVectorZAdresatamiPusty() == true)

                ksiazka.wczytajAdresatowZPliku();

            wybor = ksiazka.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazka.dodajAdresata();
                break;
            case '2':
                ksiazka.wyszukajAdresataPoImieniu();
                break;
            case '3':
                ksiazka.wyszukajAdresataPoNazwisku();
                break;
            case '4':
                ksiazka.wyswietlAdresatow();
                break;
            case '5':
                ksiazka.usunAdresata();
                break;
            case '6':
                ksiazka.edytujAdresata();
                break;
            case '7':
                ksiazka.zmianaHaslaUzytkownika();
                break;
            case '8':
                ksiazka.wylogujUzytkownika();

                break;
            }
        }
    }
    return 0;
}
