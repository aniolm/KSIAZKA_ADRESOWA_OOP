#ifndef METODYPOMOCNICZNE_H
#define METODYPOMOCNICZNE_H
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class MetodyPomocniczne
{
    public:

        static string konwerjsaIntNaString(int liczba);
        static string wczytajLinie();
        static bool czyPlikJestPusty(fstream &plikTekstowy);
        static string pobierzLiczbe(string tekst, int pozycjaZnaku);
        static int konwersjaStringNaInt(string liczba);

    private:
};

#endif // METODYPOMOCNICZNE_H
