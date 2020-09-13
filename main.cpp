#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

#include "KsiazkaAdresowa.h"
#include "Uzytkownik.h"
#include "Adresat.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka;
    ksiazka.rejestracjaUzytkownika();
    return 0;
}
