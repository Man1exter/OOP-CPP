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

int a,b,c;
int delta;
int x1,x2;

void oblicz_pierwiastki();

public:

void podaj_wspolczynniki();
void wyswietl_wynik();
void przetwarzaj();

Panel();
~Panel();

};


int main()
{

Panel pierwiastkowy;
pierwiastkowy.przetwarzaj();

return 0;
}
void Panel::podaj_wspolczynniki()
{
    
}

Panel::Panel(){

cout << "Podaj wspolczynnik a: " << endl;
cin >> a; 
cout << "Podaj wspolczynnik b: " << endl;
cin >> b; 
cout << "Podaj wspolczynnik c: " << endl;
cin >> c; 

cout << endl;

}

Panel::~Panel(){

}


void Panel::oblicz_pierwiastki()
{

}


void Panel::wyswietl_wynik()
{

}

void Panel::przetwarzaj()
{
    podaj_wspolczynniki();
    oblicz_pierwiastki();
    wyswietl_wynik();
}

// Zaprojektuj klasę, której zadaniem jest obliczenie pierwiastków równania kwadratowego ax​2​ + bx + c​ = 0.
// delta = b2 - 4 a c

// Klasa powinna zawierać następujące metody:

// ● podaj_wspolczynniki​ - zapisuje w odpowiednich ​polach klasy​ odczytane wartości współczynników​ a,b,c,
//       ​zapytanie o współczynniki powinno zostać zainicjalizowane przez konstruktor klasy

// ● oblicz_pierwiastki​ - oblicza pierwiastki wykorzystując instrukcję wyboru ​switch

// ● wyswietl_wynik​
