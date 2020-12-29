#pragma​ warning(disable: 4996)
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <algorithm>

using namespace std;


const int maxLiczb = 256;


class Panel
{

double liczby[maxLiczb];
int ilosc;

private:


int czytajDane();
void sortujDane();

public:

void wyswietlWynik();

};





int main(){

Panel Sortujacy;

int wartosci = Panel.czytajDane();
Panel.sortujDane(wartosci);
Panel.wyswietlWynik(wartosci);

return 0;
}


int Dane::czytajDane()
{

cout << "Wprowadz liczby" << endl;
for( let i = 0 ; i < maxLiczb ; i++ ){
    cin >> liczby[i];
}
}

void Dane::sortujDane(int ilosc){
sort(liczby, liczby + ilosc);
}

void Dane::wyswietlWynik(int ilosc){
cout << endl << "Po posortowaniu liczby: ";
for (int i = 0; i < ilosc; i++)
cout << liczby[i] << endl;
}

// Napisz samodzielnie,  zgodnie z zasadami programowania obiektowego program, który posortuje​ n​ liczb.
//  Klasa powinna zawierać dwie metody prywatne:  ●  czytaj_dane()​ - odczytuje dane i umieszcza je w tablicy ● sortuj_dane() ​- sortuje dane,
//   korzystając z wybranego algorytmu
//   oraz jedna metodę publiczną:  ●  wyswietl_wynik()​ - prezentuje zawartość posortowanej tablicy na ekranie monitora