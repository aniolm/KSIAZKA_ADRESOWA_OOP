#ifndef METODYPOMOCNICZNE_H
#define METODYPOMOCNICZNE_H
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class MetodyPomocniczne
{
    public:

        string konwerjsaIntNaString(int liczba);
        string wczytajLinie();
        bool czyPlikJestPusty(fstream &plikTekstowy);

    private:
};

#endif // METODYPOMOCNICZNE_H
