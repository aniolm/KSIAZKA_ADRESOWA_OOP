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

        MetodyPomocniczne metodyPomocniczne;
        string nazwaPlikuZUzytkownikami;

        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

};

#endif // PLIKZUZYTKOWNIKAMI_H
