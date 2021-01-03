#pragma​ warning(disable: 4996)
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;




class Panel
{

private:

int maxLiczby;
int liczby;
vector <int> tab;

void czytaj_dane();
void sortuj_dane();


public:

void wyswietl_wynik();
void przetwarzaj();

Panel();
~Panel();

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
cin >> maxLiczby;

cout << "Podaj te liczby: " << endl;
for(int i = 0; i < maxLiczby; i++){

cout << endl;

cin >> liczby;
cout << "Twoje liczby PRZED sortowaniem: " << endl;
tab.push_back(liczby);
}

for(auto i: tab){
    cout << i << endl;
}
cout << endl;
}



void Panel::sortuj_dane()
{
sort( tab.begin(), tab.end() );
}


void Panel::wyswietl_wynik()
{
cout << "Twoje liczby PO sortowaniu: " << endl;
for(auto i: tab){
    cout << i << endl;
}
}



void Panel::przetwarzaj()
{
    czytaj_dane();
    sortuj_dane();
    wyswietl_wynik();
}

// Zmodyfikuj program z zadania 1 tak, aby zamiast odczytywania danych za pomocą metody czytaj_dane​,
// tablica została zainicjalizowana losowymi wartościami liczbowymi ​w konstruktorze klasy.

// Tablica ta następnie powinna zostać posortowana za pomocą metody ​sortuj_dane​.
// Zawartość posortowanej tablicy powinna zostać wyświetlona na ekranie monitora za pomocą publicznej
// metody ​wyswietl_wynik​.

// Zapewnij, żeby tablica została wyczyszczona przy wyjściu z programu. Wykorzystaj do tego destruktor, który usunie wartości liczbowe z tablicy i poinformuje o tym użytkownika za /// pomocą stosownego komunikatu.