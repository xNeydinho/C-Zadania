#include <iostream>
#include <fstream>
#include <cstdio>
#include <sys/stat.h>

using namespace std;


bool fileExists(const string& filename) {
    struct stat buffer;
    return (stat(filename.c_str(), &buffer) == 0);
}

int main() {
    int wybor;
    string nazwaPliku, nowaNazwa;

    do {
        cout << "Wybierz operacje:\n";
        cout << "1 - Utworz nowy plik\n";
        cout << "2 - Usun plik\n";
        cout << "3 - Zmien nazwe pliku\n";
        cout << "4 - Wyjscie\n";
        cout << "Twoj wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1: {
                cout << "\nPodaj nazwe nowego pliku: ";
                cin >> nazwaPliku;

                ofstream nowyPlik(nazwaPliku);
                if (nowyPlik) {
                    nowyPlik.close();
                    cout << "Plik '" << nazwaPliku << "' zostal utworzony.\n\n";
                } else {
                    cout << "Blad przy tworzeniu pliku.\n\n";
                }
                break;
            }
            case 2: {
                cout << "\nPodaj nazwe pliku do usuniecia: ";
                cin >> nazwaPliku;

                if (fileExists(nazwaPliku)) {
                    if (remove(nazwaPliku.c_str()) == 0) {
                        cout << "Plik '" << nazwaPliku << "' zostal usuniety.\n\n";
                    } else {
                        cout << "Nie udalo sie usunac pliku.\n\n";
                    }
                } else {
                    cout << "Plik '" << nazwaPliku << "' nie istnieje.\n\n";
                }
                break;
            }
            case 3: {
                cout << "\nPodaj nazwe pliku do zmiany: ";
                cin >> nazwaPliku;
                cout << "Podaj nowa nazwe pliku: ";
                cin >> nowaNazwa;

                if (fileExists(nazwaPliku)) {
                    if (rename(nazwaPliku.c_str(), nowaNazwa.c_str()) == 0) {
                        cout << "Plik zostal pomyslnie zmieniony na '" << nowaNazwa << "'.\n\n";
                    } else {
                        cout << "Nie udalo sie zmienic nazwy pliku.\n\n";
                    }
                } else {
                    cout << "Plik '" << nazwaPliku << "' nie istnieje.\n\n";
                }
                break;
            }
            case 4: {
                cout << "Koniec programu.\n";
                break;
            }
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie.\n\n";
        }
    } while (wybor != 4);

}
