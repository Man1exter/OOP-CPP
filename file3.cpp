#pragma​ warning(disable: 4996)
#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;

class Panel
{

private:



public:


}


int main(){

Panel pierwiastkowy;
pierwiastkowy.przetwarzaj();

    return 0;
}

void Panel::przetwarzaj(){

    podaj_wspolczynniki​();
    oblicz_pierwiastki​();
    wyswietl_wynik​();
    
}

// Zaprojektuj klasę, której zadaniem jest obliczenie pierwiastków równania kwadratowego ax​2​ + bx + c​ = 0.

// Klasa powinna zawierać następujące metody:

// ● podaj_wspolczynniki​ - zapisuje w odpowiednich ​polach klasy​ odczytane wartości współczynników​ a,b,c,
//       ​zapytanie o współczynniki powinno zostać zainicjalizowane przez konstruktor klasy

// ● oblicz_pierwiastki​ - oblicza pierwiastki wykorzystując instrukcję wyboru ​switch

// ● wyswietl_wynik​
