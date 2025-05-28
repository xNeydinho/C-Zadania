#include <iostream>
using namespace std;

int ObliczSume(int *tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += *(tablica + i);
    }
    return suma;
}

int main() {
    const int ROZMIAR = 4;
    int liczby[ROZMIAR] = {5, 5, 5, 35};


    int *wsk = liczby;


    int suma = ObliczSume(wsk, ROZMIAR);
    cout << "Suma elementow tablicy: " << suma << endl;


    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> *(wsk + i);
    }


    cout << "Nowa tablica:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << *(wsk + i) << " ";
    }
    cout << endl;


    suma = ObliczSume(wsk, ROZMIAR);
    cout << "Nowa suma elementow tablicy: " << suma << endl;

}
