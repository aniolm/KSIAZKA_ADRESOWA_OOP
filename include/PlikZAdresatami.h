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
        PlikZAdresatami();
        void dopiszAdresataDoPliku(Adresat adresat);

    private:

        MetodyPomocniczne metodyPomocnicze;
        string nazwaPlikuZAdresatami;
        string nazwaTymczasowegoPlikuZAdresatami;

        string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

};

#endif // PLIKZADRESATAMI_H
