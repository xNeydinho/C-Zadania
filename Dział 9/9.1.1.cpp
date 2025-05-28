#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe calkowita n: ";
    cin >> n;
    return n;
}

int CalculateSumRecursive(int n) {
    if (n <= 1)
        return n;
    return n + CalculateSumRecursive(n - 1);
}

void DisplayResult(int suma) {
    cout << "Suma liczb od 1 do n wynosi: " << suma << endl;
}

int main() {
    int n = GetNumberFromUser();
    if (n < 0) {
        cout << "Podana liczba musi byc nieujemna." << endl;
    } else {
        int suma = CalculateSumRecursive(n);
        DisplayResult(suma);
    }
}
