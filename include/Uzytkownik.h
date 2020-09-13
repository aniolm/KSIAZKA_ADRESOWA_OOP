#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include <string>

using namespace std;

class Uzytkownik
{
    public:
        Uzytkownik();
        //virtual ~Uzytkownik();
        void ustawId(int noweId);
        void ustawLogin(string nowyLogin);
        void ustawHaslo(string noweHaslo);
        int pobierzId();
        string pobierzLogin();
        string pobierzHaslo();


    private:

    int id ;
    string login;
    string haslo;
};

#endif // UZYTKOWNIK_H
