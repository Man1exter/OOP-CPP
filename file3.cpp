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

float wynik;
int a,b,c;
float delta;
float x1,x2;

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

cout << endl;
cout << "Wszystkie dane zostały wyczyszczone!" << endl;
cout << endl;

}


void Panel::oblicz_pierwiastki()
{

delta = (b*b) * 4 * a * c;
wynik = sqrt((float)delta);

cout << endl;

x1 = (-b) - sqrt((float)delta) / a * a;
x2 = (-b) + sqrt((float)delta) / a * a;

}


void Panel::wyswietl_wynik()
{

cout << "delta: " << delta << endl;
cout << "wynik z delty po przepierwiastkowaniu: " << wynik << endl;

cout << "x1: " << x1 << endl;
cout << "x2: " << x2 << endl;

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
