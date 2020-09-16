#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include <fstream>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "UzytkownikManager.h"
#include "MetodyPomocniczne.h"
#include <vector>


using namespace std;

class KsiazkaAdresowa
{
    public:
        KsiazkaAdresowa();
        //virtual ~KsiazkaAdresowa();

        UzytkownikManager uzytkownikManager;
        void rejestracjaUzytkownika();
        void logowanieUzytkownika();

        void ustawIdOstatniegoAdresata(int noweId);
        int pobierzIdOstatniegoAdresata();










        char wybierzOpcjeZMenuGlownego();

        char wybierzOpcjeZMenuUzytkownika();
        char wczytajZnak();
        /*
        int dodajAdresata();
        Adresat podajDaneNowegoAdresata();
        void dopiszAdresataDoPliku(Adresat adresat);
        string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
        */



    protected:

    private:


    std::vector <Adresat> adresaci;


    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    string nazwaPlikuZAdresatami;
    string nazwaTymczasowegoPlikuZAdresatami;
};

#endif // KSIAZKAADRESOWA_H
