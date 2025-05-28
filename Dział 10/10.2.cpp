#include <iostream>
using namespace std;


void FindMinMax(float *tablica, int rozmiar, float *min, float *max) {
    *min = *max = tablica[0]; 

    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i] < *min) {
            *min = tablica[i];
        }
        if (tablica[i] > *max) {
            *max = tablica[i];
        }
    }
}

int main() {
    float liczby[10] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
    
    float min, max;

    cout << "Tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << liczby[i] << " ";
    }
    cout << endl;

    FindMinMax(liczby, 10, &min, &max);

    cout << "Najwieksza liczba: " << max << endl;
    cout << "Najmniejsza liczba: " << min << endl;

}
