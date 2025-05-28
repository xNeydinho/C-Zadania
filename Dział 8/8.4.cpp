#include <iostream>
using namespace std;


void GetArrayFromUser(int tab[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Podaj liczbe " << i + 1 << ": ";
        cin >> tab[i];
    }
}

int FindMaxValue(int tab[], int size) {
    int max = tab[0];
    for (int i = 1; i < size; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

void DisplayResult(int max) {
    cout << "Najwieksza wartosc to: " << max << endl;
}

int main() {
    const int SIZE = 5;
    int liczby[SIZE];

    GetArrayFromUser(liczby, SIZE);
    int maksymalna = FindMaxValue(liczby, SIZE);
    DisplayResult(maksymalna);

    return 0;
}
