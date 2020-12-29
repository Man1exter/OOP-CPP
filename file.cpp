#pragma​ warning(disable: 4996)
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;




class Panel
{

private:

int maxLiczb;
int liczby;
int tab[];

void czytaj_dane();
void sortuj_dane();


public:

void wyswietlWynik();

};




int main()
{

Panel liczb;
liczb.przetwarzaj();

return 0;
}


void Panel::czytaj_dane()
{
cout << "Podaj ile liczb chcesz posortowac: " << endl;
cin >> maxLiczb;
}










void Panel::przetwarzaj()
{
    czytaj_dane();
    sortuj_dane();
    wyswietl_wynik();
}

// Napisz samodzielnie,  zgodnie z zasadami programowania obiektowego program, który posortuje​ n​ liczb.
//  Klasa powinna zawierać dwie metody prywatne:  ●  czytaj_dane()​ - odczytuje dane i umieszcza je w tablicy ● sortuj_dane() ​- sortuje dane,
//   korzystając z wybranego algorytmu
//   oraz jedna metodę publiczną:  ●  wyswietl_wynik()​ - prezentuje zawartość posortowanej tablicy na ekranie monitora