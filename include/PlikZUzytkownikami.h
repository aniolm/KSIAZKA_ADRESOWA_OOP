#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <fstream>
#include <vector>
#include "Uzytkownik.h"
#include "MetodyPomocniczne.h"

using namespace std;

class PlikZUzytkownikami
{
    public:
        PlikZUzytkownikami(string nazwaPlikuZUzytkownikami);
        void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

        vector <Uzytkownik> wczytajUzytkownikowZPliku();
        Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
        void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);

    private:

        const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;

        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

};

#endif // PLIKZUZYTKOWNIKAMI_H
