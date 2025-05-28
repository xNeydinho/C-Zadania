#include <iostream>
#include <cstring> //
using namespace std;

int main() {
    char tekst[21];
    char odwrocony[21];

    cout << "Podaj tekst do odwrocenia (max 20 znakow): ";
    cin.getline(tekst, 21);

    int dlugosc = strlen(tekst);

    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = tekst[dlugosc - 1 - i];
    }
    odwrocony[dlugosc] = '\0';

    cout << "Odwrócony tekst: " << odwrocony << endl;

    return 0;
}
