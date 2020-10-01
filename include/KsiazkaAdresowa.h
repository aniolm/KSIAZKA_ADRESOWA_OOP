#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include <fstream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"
#include "MetodyPomocniczne.h"
#include <vector>


using namespace std;

class KsiazkaAdresowa
{
    public:



        KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami);
        ~KsiazkaAdresowa();
        void rejestracjaUzytkownika();
        void logowanieUzytkownika();
        bool czyUzytkownikJestZalogowany();
        void dodajAdresata();
        void wyswietlAdresatow();
        void wylogujUzytkownika();
        void wyszukajAdresataPoImieniu();
        void wyszukajAdresataPoNazwisku();
        void edytujAdresata();
        void usunAdresata();
        void zmianaHaslaUzytkownika();

        char wybierzOpcjeZMenuGlownego();
        char wybierzOpcjeZMenuUzytkownika();



    private:

        UzytkownikManager uzytkownikManager;
        AdresatManager *adresatManager;
        string NAZWA_PLIKU_Z_ADRESATAMI;


};

#endif // KSIAZKAADRESOWA_H
