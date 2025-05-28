#include <iostream>
using  namespace std;
int main(){


int tablica[5];


cout << "Podaj 5 liczb calkowitych:\n";
for (int i = 0; i < 5; i++) {
	cout << "Podaj liczbe nr " << i + 1 << ": ";
	cin >> tablica[i];
	if (tablica[i] < 0){
	tablica[i] = 0;
}


}


cout << "\nLiczby ujemne zamienione na 0 : ";
for (int i = 0; i < 5; i++) {
	cout << tablica[i] << " ";

}
	cout << endl;
}