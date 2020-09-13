#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Uzytkownik.h"
#include <vector>

using namespace std;

class KsiazkaAdresowa
{
    public:
        KsiazkaAdresowa();
        //virtual ~KsiazkaAdresowa();
        void rejestracjaUzytkownika();
        Uzytkownik podajDaneNowegoUzytkownika();
        int pobierzIdNowegoUzytkownika();
        bool czyIstniejeLogin(string login);
        string wczytajLinie();
        void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
        bool czyPlikJestPusty(fstream &plikTekstowy);
        string konwerjsaIntNaString(int liczba);
        int logowanieUzytkownika();


    protected:

    private:

    std::vector <Uzytkownik> uzytkownicy;
//    std::vector <Adresat> adresaci;

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    string nazwaPlikuZUzytkownikami;
    string nazwaPlikuZAdresatami;
    string nazwaTymczasowegoPlikuZAdresatami;
};

#endif // KSIAZKAADRESOWA_H
