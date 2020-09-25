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

        AdresatManager(string nazwaPlikuZAdresatami);
        void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
        void ustawIdOstatniegoAdresata(int noweId);
        int pobierzIdOstatniegoAdresata();
        void ustawIdUsunietegoAdresata(int noweId);
        int pobierzIdOUsunietegoAdresata();
        int dodajAdresata(int idZalogowanegoUzytkownika);
        bool czyVectorZAdresatamiPusty();
        void usunVectorZAdresatami();
        void wyswietlWszystkichAdresatow();
        //int znajdzIdOstatniegoAdresata();
        int znajdzIdOstatniegoAdresataWPliku();
        void wyszukajAdresatowPoImieniu();
        void wyszukajAdresatowPoNazwisku();
        void edytujAdresata();
        int usunAdresata();
        int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);


    private:
        PlikZAdresatami plikZAdresatami;
        vector <Adresat> adresaci;
        int idOstatniegoAdresata;
        int idUsunietegoAdresata;

        Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
        void wyswietlDaneAdresata(Adresat adresat);
        void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
        int podajIdWybranegoAdresata();
        char wybierzOpcjeZMenuEdycja();



};

#endif // ADRESATMANAGER_H
