#pragma​ warning(disable: 4996)
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;




class Panel
{

private:

int maxlLiczby;
int liczby;
vector <int> tab;

void czytaj_dane();
void sortuj_dane();


public:

void wyswietl_wynik();
void przetwarzaj();

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
cin >> maxlLiczby;

cout << "Podaj te liczby: " << endl;
for(int i = 0; i < maxlLiczby; i++){

cin >> liczby;
tab.push_back(liczby);
}

for(auto i: tab){
    cout << i << endl;
}
}



void Panel::sortuj_dane()
{
cout << "Podaj ile liczb chcesz posortowac:" << endl;
}


void Panel::wyswietl_wynik()
{
cout << "Podaj ile liczb chcesz posortowac:" << endl;
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