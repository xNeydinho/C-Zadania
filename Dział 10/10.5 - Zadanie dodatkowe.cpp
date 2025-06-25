#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void LosujTablice(int *tablica, int rozmiar, int poczatek, int koniec) {
    for (int i = 0; i < rozmiar; i++) {
        *(tablica + i) = poczatek + rand() % (koniec - poczatek + 1);
    }
}


bool SprawdzLiczbe(int *liczba, int *tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (*(tablica + i) == *liczba) {
            return true;
        }
    }
    return false;
}

int main() {
    srand(time(0));

    int rozmiar;
    int poczatek, koniec;


    cout << "Ile liczb chcesz wylosowac? ";
    cin >> rozmiar;

    cout << "Podaj wartosc poczatkowa: ";
    cin >> poczatek;

    cout << "Podaj wartosc koncowa: ";
    cin >> koniec;


    if (poczatek > koniec) {
        cout << "Blad: wartosc poczatkowa nie moze byc wieksza od koncowej." << endl;
        return 1;
    }


    int *tablica = new int[rozmiar];


    LosujTablice(tablica, rozmiar, poczatek, koniec);


    cout << "Tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tablica + i);
        if (i < rozmiar - 1) {
            cout << ", ";
        }
    }
    cout << endl;


    int liczba;
    int proby = 0;

    while (true) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tablica, rozmiar)) {
            cout << "Zgadles" << endl;
            break;
        } else {
            cout << "Nie zgadles" << endl;
        }
    }

    cout << "Zgadles za " << proby << " razem." << endl;


    delete[] tablica;

    return 0;
}
