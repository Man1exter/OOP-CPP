#pragma​ warning(disable: 4996)
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Panel
{

private:

int maxLiczby;
int liczby;
vector <int> tab;

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

Panel::Panel(){

    srand( time( NULL ) );
cout << "Podaj ile randomowych liczb chcesz posortowac: " << endl;
cin >> maxLiczby;


for(int i = 0; i < maxLiczby; i++){

liczby = (( rand() % 99 ) + 1 );

tab.push_back(liczby);
}

cout << "Twoje randomowe liczby PRZED sortowaniem: " << endl;
cout << endl;
for(auto i: tab){
    cout << i << endl;
}
cout << endl;
    cout << "Randomowe liczby zostaly dodane do tablicy " << endl;
}

Panel::~Panel(){
    cout << endl;
    cout << "Tablica zostala wyzerowana z randomowych liczb" << endl;
    cout << endl;
}


void Panel::sortuj_dane()
{
sort( tab.begin(), tab.end());
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
    sortuj_dane();
    wyswietl_wynik();
}

// Zmodyfikuj program z zadania 1 tak, aby zamiast odczytywania danych za pomocą metody czytaj_dane​,
// tablica została zainicjalizowana losowymi wartościami liczbowymi ​w konstruktorze klasy.

// Tablica ta następnie powinna zostać posortowana za pomocą metody ​sortuj_dane​.
// Zawartość posortowanej tablicy powinna zostać wyświetlona na ekranie monitora za pomocą publicznej
// metody ​wyswietl_wynik​.

// Zapewnij, żeby tablica została wyczyszczona przy wyjściu z programu. Wykorzystaj do tego destruktor, który usunie wartości liczbowe z tablicy i poinformuje o tym użytkownika za //pomocą stosownego komunikatu.