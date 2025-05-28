#include <iostream>
using  namespace std;
int main(){

int wysokosc, szerokosc;

cout << "Podaj szerokosc prostokata: ";
cin >> szerokosc;
cout << "Podaj wysokosc prostokata: ";
cin >> wysokosc;


for (int i = 0; i < wysokosc; i++) {

    for (int j = 0; j < szerokosc; j++) {

         if (i == 0 || i == wysokosc - 1 || j == 0 || j == szerokosc - 1) {
                cout << "*";
                
            } else {
                cout << " ";
    }
	}
	cout << endl;





}
}





