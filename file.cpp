#pragma​ warning(disable: 4996)
#include <iostream>
#include <algorithm>

using namespace std;




class Panel
{

private:

int maxLiczb;
int liczby;
int tab[];

void czytajDane();
void sortujDane();


public:

void wyswietlWynik();

};




int main()
{

Panel liczb;

return 0;
}


void czytajDane

// Napisz samodzielnie,  zgodnie z zasadami programowania obiektowego program, który posortuje​ n​ liczb.
//  Klasa powinna zawierać dwie metody prywatne:  ●  czytaj_dane()​ - odczytuje dane i umieszcza je w tablicy ● sortuj_dane() ​- sortuje dane,
//   korzystając z wybranego algorytmu
//   oraz jedna metodę publiczną:  ●  wyswietl_wynik()​ - prezentuje zawartość posortowanej tablicy na ekranie monitora