#include <iostream>
#include <string>
using namespace std;


struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};


void WyswietlDane(const Osoba& osoba) {
    cout << "Imie: " << osoba.imie << endl;
    cout << "Nazwisko: " << osoba.nazwisko << endl;
    cout << "Wiek: " << osoba.wiek << endl;
}

int main() {

    Osoba osoba1 = {"Jan", "Kowalski", 25};

    cout << "Dane przed modyfikacja:\n";
    WyswietlDane(osoba1);


    osoba1.wiek = 30;

    cout << "\nDane po modyfikacji:\n";
    WyswietlDane(osoba1);

}
