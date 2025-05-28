#include <iostream>
using namespace std;

int main() {
    char tekst[21];
    char znak;
    int pozycje[21];
    int licznik = 0;


    cout << "Podaj tekst (max 20 znakow): ";
    cin.getline(tekst, 21);


    cout << "Podaj znak do zliczenia: ";
    cin >> znak;


    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == znak) {
            pozycje[licznik] = i; 
            licznik++;
        }
    }


    cout << "Znak '" << znak << "' wystapil " << licznik << " razy.\n";

    if (licznik > 0) {
        cout << "Pozycje wystapien: ";
        for (int i = 0; i < licznik; i++) {
            cout << pozycje[i];
            if (i < licznik - 1) cout << ", ";
        }
        cout << endl;
    }

}
