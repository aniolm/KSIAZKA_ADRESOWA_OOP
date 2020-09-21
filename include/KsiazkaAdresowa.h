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

        UzytkownikManager uzytkownikManager;
        AdresatManager adresatManager;

        KsiazkaAdresowa();
        void rejestracjaUzytkownika();
        int logowanieUzytkownika();
        int dodajAdresata(int idZalogowanegoUzytkownika);
        char wybierzOpcjeZMenuGlownego();
        char wybierzOpcjeZMenuUzytkownika();
        char wczytajZnak();

    private:



};

#endif // KSIAZKAADRESOWA_H
