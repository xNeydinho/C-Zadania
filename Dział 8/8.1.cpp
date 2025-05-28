#include <iostream>
using namespace std;


int main() {
    int liczba;

    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    if (liczba % 2 == 0) {
        cout << "Liczba " << liczba << " jest parzysta." << endl;
    } else {
        cout << "Liczba " << liczba << " jest nieparzysta." << endl;
    }

}
