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
        PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI);
        void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

        vector <Uzytkownik> wczytajUzytkownikowZPliku();
        Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
        void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);

    private:

        const string nazwaPlikuZUzytkownikami;

        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

};

#endif // PLIKZUZYTKOWNIKAMI_H
