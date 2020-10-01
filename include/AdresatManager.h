#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocniczne.h"
#include <vector>
#include <algorithm>


using namespace std;

class AdresatManager
{
    public:

        AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika);
        void ustawIdUsunietegoAdresata(int noweId);
        int pobierzIdUsunietegoAdresata();
        void dodajAdresata(int idZalogowanegoUzytkownika);
        void wyswietlWszystkichAdresatow();
        void wyszukajAdresatowPoImieniu();
        void wyszukajAdresatowPoNazwisku();
        void edytujAdresata();
        void usunAdresata();



    private:
        PlikZAdresatami plikZAdresatami;
        vector <Adresat> adresaci;
        int idUsunietegoAdresata;



        Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
        void wyswietlDaneAdresata(Adresat adresat);
        void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
        int podajIdWybranegoAdresata();
        char wybierzOpcjeZMenuEdycja();



};

#endif // ADRESATMANAGER_H
