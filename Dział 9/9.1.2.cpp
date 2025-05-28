#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe elementow ciagu Fibonacciego: ";
    cin >> n;
    return n;
}

int CalculateFibonacciRecursive(int n) {
    if (n <= 1)
        return 1;
    return CalculateFibonacciRecursive(n - 1) + CalculateFibonacciRecursive(n - 2);
}

void DisplayFibonacciSequence(int n) {
    cout << "Ciąg Fibonacciego: ";
    for (int i = 0; i < n; i++) {
        cout << CalculateFibonacciRecursive(i) << " ";
    }
    cout << endl;
}

int main() {
    int liczbaElementow = GetNumberFromUser();
    if (liczbaElementow <= 0) {
        cout << "Liczba elementow musi byc dodatnia." << endl;
    } else {
        DisplayFibonacciSequence(liczbaElementow);
    }
}
