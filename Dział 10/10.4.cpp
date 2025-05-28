#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void LosujTablice(int *tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        *(tablica + i) = rand() % 51; 
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

    const int ROZMIAR = 10;
    int tablica[ROZMIAR];


    LosujTablice(tablica, ROZMIAR);


    cout << "Tablica: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << ", ";
    }
    cout << endl;

    int liczba;
    int proby = 0;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (!SprawdzLiczbe(&liczba, tablica, ROZMIAR)) {
            cout << "Nie zgadles" << endl;
        } else {
            cout << "Zgadles!" << endl;
            break;
        }
    } while (true);

    cout << "Zgadles za " << proby << " razem."  << endl;
}

