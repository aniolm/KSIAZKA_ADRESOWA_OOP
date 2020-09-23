#include "KsiazkaAdresowa.h"
KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami ): uzytkownikManager(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami)
{
    uzytkownikManager.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManager.ustawIdZalogowanegoUzytkownika(uzytkownikManager.logowanieUzytkownika());
}

void KsiazkaAdresowa::wczytajAdresatowZPliku()
{
    adresatManager.wczytajAdresatowZPliku(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    adresatManager.ustawIdOstatniegoAdresata(adresatManager.znajdzIdOstatniegoAdresata());
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatManager.ustawIdOstatniegoAdresata(adresatManager.dodajAdresata(uzytkownikManager.pobierzIdZalogowanegoUzytkownika()));

}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikManager.ustawIdZalogowanegoUzytkownika(0);
    adresatManager.usunVectorZAdresatami();

}

void KsiazkaAdresowa::wyswietlAdresatow()
{
    adresatManager.wyswietlWszystkichAdresatow();

}

void KsiazkaAdresowa::wyszukajAdresataPoImieniu()
{
    adresatManager.wyszukajAdresatowPoImieniu();

}

void KsiazkaAdresowa::wyszukajAdresataPoNazwisku()
{
    adresatManager.wyszukajAdresatowPoNazwisku();

}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = wczytajZnak();

    return wybor;
}



char KsiazkaAdresowa::wczytajZnak()
{
    string wejscie = "";
    char znak  = {0};

    while (true)
    {
        getline(cin, wejscie);

        if (wejscie.length() == 1)
        {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}
