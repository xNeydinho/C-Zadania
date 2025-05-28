#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void DuzaMala(int liczba, int wylosowanaLiczba) {
    if (liczba < wylosowanaLiczba) {
        cout << "Za malo" << endl;
    } else if (liczba > wylosowanaLiczba) {
        cout << "Za duzo" << endl;
    }
}

bool CheckLiczba(int liczba, int wylosowanaLiczba) {
    return liczba == wylosowanaLiczba;
}

int main() {
    srand(time(NULL)); 
    int wylosowana = rand() % 100 + 1; 
    int podana;

    cout << "Zgadnij liczbe od 1 do 100" << endl;

    do {
        cout << "Podaj liczbe: ";
        cin >> podana;

        if (!CheckLiczba(podana, wylosowana)) {
            DuzaMala(podana, wylosowana);
        }

    } while (!CheckLiczba(podana, wylosowana));

    cout << "Odgadles liczbe: " << wylosowana << endl;

}
