#include "UzytkownikManager.h"

UzytkownikManager::UzytkownikManager()
{
    idZalogowanegoUzytkownika = 0;
}

void UzytkownikManager::ustawIdZalogowanegoUzytkownika(int noweId)
{
    idZalogowanegoUzytkownika = noweId;
}

int UzytkownikManager::pobierzIdZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}

void UzytkownikManager::rejestracjaUzytkownika()
{
    PlikZUzytkownikami plikZUzytkownikami;
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikManager::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;
    MetodyPomocniczne metodyPomocniczne;
    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout << endl << "Podaj login: ";
        uzytkownik.ustawLogin(metodyPomocniczne.wczytajLinie());
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo(metodyPomocniczne.wczytajLinie());

    return uzytkownik;
}

int UzytkownikManager::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}


bool UzytkownikManager::czyIstniejeLogin(string login)
{
    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> pobierzLogin() == login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
        else
            itr++;
    }
    return false;
}

int UzytkownikManager::logowanieUzytkownika()
{
    Uzytkownik uzytkownik;
    MetodyPomocniczne metodyPomocniczne;
    string login = "", haslo = "";

    cout << endl << "Podaj login: ";
    login = metodyPomocniczne.wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = metodyPomocniczne.wczytajLinie();

                if (itr -> pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    return itr -> pobierzId();
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

