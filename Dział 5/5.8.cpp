#include <iostream>
using  namespace std;
int main(){

int wysokosc, szerokosc;

cout << "Podaj szerokosc trojkata: ";
cin >> szerokosc;
cout << "Podaj wysokosc trojkata: ";
cin >> wysokosc;


for (int i = 0; i < wysokosc; i++) {
	int margin = i;

    for (int j = 0; j < szerokosc; j++) {

         if (j < margin || j >= szerokosc - margin)  {
                cout << " ";

			}else
                cout << "*";
    
	}
		cout << endl;
	}

}





