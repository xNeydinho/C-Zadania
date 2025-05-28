#include <iostream>
using namespace std;

int CalculatePowerRecursive(int base, int exponent) {
    if (exponent == 0)
        return 1; 
    return base * CalculatePowerRecursive(base, exponent - 1);
}

void DisplayResult(int base, int exponent, int result) {
    cout << base << " do potegi " << exponent << " wynosi: " << result << endl;
}

int main() {
    int base, exponent;

    cout << "Podaj liczbe podstawowa: ";
    cin >> base;

    cout << "Podaj wykladnik: ";
    cin >> exponent;

    if (exponent < 0) {
        cout << "Wykladnik musi byc nieujemny" << endl;
        return 1;
    }

    int result = CalculatePowerRecursive(base, exponent);
    DisplayResult(base, exponent, result);


}
