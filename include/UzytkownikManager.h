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
        UzytkownikManager();
        void rejestracjaUzytkownika();
        Uzytkownik podajDaneNowegoUzytkownika();
        void ustawIdZalogowanegoUzytkownika(int noweId);
        int pobierzIdZalogowanegoUzytkownika();
        int logowanieUzytkownika();


    private:

        int idZalogowanegoUzytkownika;
        std::vector <Uzytkownik> uzytkownicy;

        int pobierzIdNowegoUzytkownika();
        bool czyIstniejeLogin(string login);

};

#endif // UZYTKOWNIKMANAGER_H
