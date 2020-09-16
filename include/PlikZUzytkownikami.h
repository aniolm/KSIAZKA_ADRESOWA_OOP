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
        PlikZUzytkownikami();
        void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);




    private:
        string nazwaPlikuZUzytkownikami;
        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
        bool czyPlikJestPusty(fstream &plikTekstowy);
};

#endif // PLIKZUZYTKOWNIKAMI_H
