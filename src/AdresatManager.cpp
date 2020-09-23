#include "AdresatManager.h"

AdresatManager::AdresatManager(string nazwaPlikuZAdresatami): plikZAdresatami(nazwaPlikuZAdresatami)
{
    idOstatniegoAdresata=0;
    idUsunietegoAdresata=0;
}


void AdresatManager::ustawIdOstatniegoAdresata(int noweId)
{
    idOstatniegoAdresata = noweId;
}

int AdresatManager::pobierzIdOstatniegoAdresata()
{
    return idOstatniegoAdresata;
}

void AdresatManager::wczytajAdresatowZPliku(int idZalogowanegoUzytkownika)
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

int AdresatManager::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatManager::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocniczne::wczytajLinie());
    //adresat.imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocniczne::wczytajLinie());
    //adresat.nazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocniczne::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocniczne::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocniczne::wczytajLinie());

    return adresat;
}

bool AdresatManager::czyVectorZAdresatamiPusty()
{
    return adresaci.empty();
}

void AdresatManager::usunVectorZAdresatami()
{
 adresaci.clear();
}
