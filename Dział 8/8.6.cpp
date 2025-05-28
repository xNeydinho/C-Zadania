#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    return liczba;
}

unsigned long long CalculateFactorial(int n) {
    unsigned long long wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

void DisplayResult(int n, unsigned long long wynik) {
    cout << "Silnia z liczby " << n << " to: " << wynik << endl;
}

int main() {
    int liczba = GetNumberFromUser();

    if (liczba < 0) {
        cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych." << endl;
    } else {
        unsigned long long silnia = CalculateFactorial(liczba);
        DisplayResult(liczba, silnia);
    }

    return 0;
}
