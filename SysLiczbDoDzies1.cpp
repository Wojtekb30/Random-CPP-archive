#include <iostream>

using namespace std;

//do ustawienia przed uzytkownika
const int basesysteml = 2; //baza systemu liczbowego
const int liczbasys[]={1, 1, 1, 1}; //tabela z cyframi liczby do przeliczenia
int dlugosctabeli = sizeof(liczbasys)/sizeof(int); //dlugosc tabeli, tutaj zrobilem automatyczne jej liczenie ale mozna wymagac recznego podania

//-------------------------


int wynik;
int tempwynik;
int systeml = basesysteml;

int main()
{
    dlugosctabeli = dlugosctabeli - 1; //korekta bo indeksowanie zaczyna sie od 0

    while (dlugosctabeli >= 0){
    if (wynik == 0){
        tempwynik = liczbasys[dlugosctabeli]*1;
    }
    else {
        tempwynik = liczbasys[dlugosctabeli]*systeml;
        systeml = systeml*basesysteml;
    }
    wynik = wynik + tempwynik;

    dlugosctabeli=dlugosctabeli-1;
    }
    cout<<wynik;
    return 0;
}
