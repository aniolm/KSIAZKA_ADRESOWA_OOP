#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocniczne.h"
#include <vector>

using namespace std;

class AdresatManager
{
    public:
        AdresatManager();

        void ustawIdOstatniegoAdresata(int noweId);
        int pobierzIdOstatniegoAdresata();

        int dodajAdresata(int idZalogowanegoUzytkownika);

    private:

        vector <Adresat> adresaci;
        int idOstatniegoAdresata;
        int idUsunietegoAdresata;

        Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);

};

#endif // ADRESATMANAGER_H
