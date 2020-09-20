#include "AdresatManager.h"

AdresatManager::AdresatManager()
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

int AdresatManager::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    PlikZAdresatami plikZAdresatami;
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
    MetodyPomocniczne metodyPomocniczne;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(metodyPomocniczne.wczytajLinie());
    //adresat.imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(metodyPomocniczne.wczytajLinie());
    //adresat.nazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(metodyPomocniczne.wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(metodyPomocniczne.wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(metodyPomocniczne.wczytajLinie());

    return adresat;
}



