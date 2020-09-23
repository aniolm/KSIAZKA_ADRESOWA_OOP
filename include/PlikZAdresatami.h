#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <fstream>
#include <vector>
#include "Adresat.h"
#include "MetodyPomocniczne.h"

using namespace std;

class PlikZAdresatami
{
    public:
        PlikZAdresatami(string NAZWAPLIKUZADRESATAMI);
        void dopiszAdresataDoPliku(Adresat adresat);
        vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

    private:

        const string nazwaPlikuZAdresatami;
        string nazwaTymczasowegoPlikuZAdresatami;

        string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
        Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
        int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

};

#endif // PLIKZADRESATAMI_H
