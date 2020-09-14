#ifndef ADRESAT_H
#define ADRESAT_H
#include <string>

using namespace std;

class Adresat
{
    public:
        Adresat();
        void ustawId(int noweId);
        void ustawIdUzytkownika(int noweIdUzytkownika);
        void ustawImie(string noweImie);
        void ustawNazwisko(string noweNazwisko);
        void ustawNumerTelefonu(string nowyNumerTelefonu);
        void ustawEmail(string nowyEmail);
        void ustawAdres(string nowyAdres);
        int pobierzId();
        int pobierzIdUzytkownika();
        string pobierzImie();
        string pobierzNazwisko();
        string pobierzNumerTelefonu();
        string pobierzEmail();
        string pobierzAdres();

        //virtual ~Adresat();

    private:


    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

};

#endif // ADRESAT_H
