#include <iostream>
using  namespace std;
int main(){
	

int macierz[3][3];
int suma = 0;


cout << "Podaj 9 liczb calkowitych do macierzy 3x3:\n";
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
        cin >> macierz[i][j];
        suma += macierz[i][j];
    }
}

int srednia = suma / 9;
cout << "Srednia wynosi: " << srednia << endl;
}
