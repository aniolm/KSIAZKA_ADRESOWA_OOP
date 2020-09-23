#ifndef METODYPOMOCNICZNE_H
#define METODYPOMOCNICZNE_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

class MetodyPomocniczne
{
    public:

        static string konwerjsaIntNaString(int liczba);
        static string wczytajLinie();
        static bool czyPlikJestPusty(fstream &plikTekstowy);
        static string pobierzLiczbe(string tekst, int pozycjaZnaku);
        static int konwersjaStringNaInt(string liczba);
        static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

    private:
};

#endif // METODYPOMOCNICZNE_H
