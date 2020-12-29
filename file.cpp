#pragma​ warning(disable: 4996)
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <algorithm>

using namespace std;



int maxLiczb;



class liczby{

private:


 void czytajDane();
 void sortujDane();

public:

void wyswietlWynik();

};





int main(){

cout << "Podaj ile max liczb chcesz wprowadzic: " << endl;
cin >> maxLiczb;

if(!maxLiczb){
    cout << "Wprowadzone zostały niedozwolone znaki" << endl;
} else {
    cout << "Wprowadziles max liczb: " << maxLiczb << endl;
}




return 0;
}
// Napisz samodzielnie,  zgodnie z zasadami programowania obiektowego program, który posortuje​ n​ liczb.
//  Klasa powinna zawierać dwie metody prywatne:  ●  czytaj_dane()​ - odczytuje dane i umieszcza je w tablicy ● sortuj_dane() ​- sortuje dane,
//   korzystając z wybranego algorytmu
//   oraz jedna metodę publiczną:  ●  wyswietl_wynik()​ - prezentuje zawartość posortowanej tablicy na ekranie monitora