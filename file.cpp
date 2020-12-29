#include <iostream>
#include <algorithm>


using namespace std;


const int LIMIT = 256;

class Dane
{
    double liczby[LIMIT];
    int suma;
public:
    Dane() {suma = 0;}
    int wprowadz_dane();
    void sortuj(int ilosc);

private:
    void wyswietl_wynik(int ilosc);
};

int main()
{
    Dane Elo;
    int wartosci = Elo.wprowadz_dane();
    Elo.sortuj(wartosci);
    Elo.wyswietl_wynik(wartosci);
    return 0;
}
int Dane::wprowadz_dane()
{
    cout << "Podaj liczby (znak niebedacy cyfra konczy wprowadzanie):\n";
    for (int i = 0; i < LIMIT; i++)
    {
        cin >> liczby[i];
        if (!cin)
        {
            cin.clear();
            cin.sync();
            break;
        }
        ++suma;
    }
    return suma;
}

void Dane::sortuj(int ilosc)
{
    sort (liczby, liczby + ilosc);
}

void Dane::wyswietl_wynik(int ilosc)
{
    cout << endl << "Posortowane wartosci:\n";
    for (int i = 0; i < ilosc; i++)
        cout << liczby[i] << endl;
}

// Napisz samodzielnie,  zgodnie z zasadami programowania obiektowego program, który posortuje​ n​ liczb.
//  Klasa powinna zawierać dwie metody prywatne:  ●  czytaj_dane()​ - odczytuje dane i umieszcza je w tablicy ● sortuj_dane() ​- sortuje dane,
//   korzystając z wybranego algorytmu
//   oraz jedna metodę publiczną:  ●  wyswietl_wynik()​ - prezentuje zawartość posortowanej tablicy na ekranie monitora