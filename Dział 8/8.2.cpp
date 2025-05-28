#include <iostream>
using namespace std;

int main() {
    int wybor = -1;
    double a, b;

    while (wybor != 0) {
        cout << "\nWybierz operacje:" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "0. Zakoncz" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Program zakonczony." << endl;
        }
        else if (wybor >= 1 && wybor <= 4) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;

            if (wybor == 1) {
                cout << "Wynik dodawania: " << a + b << endl;
            }
            else if (wybor == 2) {
                cout << "Wynik odejmowania: " << a - b << endl;
            }
            else if (wybor == 3) {
                cout << "Wynik mnozenia: " << a * b << endl;
            }
            else if (wybor == 4) {
                if (b != 0)
                    cout << "Wynik dzielenia: " << a / b << endl;
                else
                    cout << "Blad: nie mozna dzielic przez zero" << endl;
            }
        }
        else {
            cout << "Niepoprawny wybor. Sprobuj ponownie." << endl;
        }
    }

}
