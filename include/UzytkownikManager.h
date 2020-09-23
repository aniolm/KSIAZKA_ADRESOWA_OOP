#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocniczne.h"
#include <vector>

using namespace std;

class UzytkownikManager
{
    public:
        UzytkownikManager(string nazwaPlikuZUzytkownikami);
        void rejestracjaUzytkownika();
        Uzytkownik podajDaneNowegoUzytkownika();
        void ustawIdZalogowanegoUzytkownika(int noweId);
        int pobierzIdZalogowanegoUzytkownika();
        int logowanieUzytkownika();
        void wczytajUzytkownikowZPliku();


    private:
        PlikZUzytkownikami plikZUzytkownikami;
        int idZalogowanegoUzytkownika;
        vector <Uzytkownik> uzytkownicy;

        int pobierzIdNowegoUzytkownika();
        bool czyIstniejeLogin(string login);

};

#endif // UZYTKOWNIKMANAGER_H
