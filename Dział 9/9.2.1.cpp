#include <iostream>
using namespace std;

const double PI = 3.1415;

double CalculateVolume(double a) {
    return a * a * a;
}

double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

double CalculateVolume(int r, int h) {
    return PI * r * r * h;
}

void DisplayResult(double volume) {
    cout << "Objetosc bryly wynosi: " << volume << endl;
}

int main() {
    int choice;
    cout << "Wybierz bryle do obliczenia objętosci:\n";
    cout << "1. Szescian\n";
    cout << "2. Prostopadloscian\n";
    cout << "3. Walec\n";
    cout << "Twoj wybor: ";
    cin >> choice;

    if (choice == 1) {
        double a;
        cout << "Podaj dlugosc boku szescianu: ";
        cin >> a;
        DisplayResult(CalculateVolume(a));
    }
    else if (choice == 2) {
        double a, b, h;
        cout << "Podaj dlugosc, prostopadloscianu: ";
        cin >> a;
        cout << "Podaj szerokosc prostopadloscianu: ";
        cin >> b;
        cout << "Podaj wysokosc prostopadloscianu: ";
        cin >> h;
        DisplayResult(CalculateVolume(a, b, h));
    }
    else if (choice == 3) {
        int r, h;
        cout << "Podaj promien podstawy: ";
        cin >> r;
        cout << "Podaj  wysokosc walca: ";
		cin >> h;
        DisplayResult(CalculateVolume(r, h));
    }
    else {
        cout << "Nieprawidłowy wybor" << endl;
    }

    return 0;
}
