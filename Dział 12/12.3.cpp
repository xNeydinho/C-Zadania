#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>

using namespace std;


bool fileExists(const string& filename) {
    struct stat buffer;
    return (stat(filename.c_str(), &buffer) == 0);
}


struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};


void DisplayFileContent(const string& filename) {
    ifstream file(filename);
    string imie, nazwisko;
    int wiek;

    cout << "\nDane w pliku po dopisaniu:\n";
    while (file >> imie >> nazwisko >> wiek) {
        cout << "Imię: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << "\n";
    }
    file.close();
}

int main() {
    const string filename = "dane.txt";

    if (!fileExists(filename)) {
        cout << "Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykładowych danych...\n";
        ofstream file(filename);
        if (!file) {
            cerr << "Blad podczas tworzenia pliku!\n";
            return 1;
        }
        file << "Jan Kowalski 25\n";
        file << "Anna Nowak 30\n";
        file.close();
    }

    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    char wybor;
    cin >> wybor;

    if (wybor == 't' || wybor == 'T') {
        Osoba nowaOsoba;
        cout << "Podaj imie: ";
        cin >> nowaOsoba.imie;
        cout << "Podaj nazwisko: ";
        cin >> nowaOsoba.nazwisko;
        cout << "Podaj wiek: ";
        cin >> nowaOsoba.wiek;


        ofstream file(filename, ios::app);
        if (!file) {
            cerr << "Blad podczas otwierania pliku do dopisywania!\n";
            return 1;
        }
        file << nowaOsoba.imie << " " << nowaOsoba.nazwisko << " " << nowaOsoba.wiek << "\n";
        file.close();
    }


    DisplayFileContent(filename);


}
