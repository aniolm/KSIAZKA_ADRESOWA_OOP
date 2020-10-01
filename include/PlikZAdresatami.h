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
        PlikZAdresatami(string nazwaPlikuZAdresatami);
        int pobierzIdOstatniegoAdresata();
        void ustawIdOstatniegoAdresata(int noweId);

        void dopiszAdresataDoPliku(Adresat adresat);
        vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
        void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
        int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
        void usunWybranaLinieWPliku(int numerUsuwanejLinii);
        void pobierzZPlikuIdOstatniegoAdresata();
        void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsunietegoAdresata);

    private:

        const string NAZWA_PLIKU_Z_ADRESATAMI;
        string nazwaTymczasowegoPlikuZAdresatami;
        int idOstatniegoAdresata;


        string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
        Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
        int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
        void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
        void usunPlik(string nazwaPlikuZRozszerzeniem);
        void zmienNazwePliku(string staraNazwa, string nowaNazwa);
        int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);


};

#endif // PLIKZADRESATAMI_H
