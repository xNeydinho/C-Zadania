#include <iostream>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(Samochod samochod) {
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << samochod.marka << endl;
    cout << "Model: " << samochod.model << endl;
    cout << "Rok produkcji: " << samochod.rok_produkcji << endl;
}

int main() {
    Samochod Samochod1 = {"Toyota", "Corolla", 2018};

    WyswietlDane(Samochod1);

    return 0;
}
