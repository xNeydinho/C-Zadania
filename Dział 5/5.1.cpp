#include <iostream>
using  namespace std;
int main(){

int liczbanaturalna;
int suma = 0;
cout << "Podaj liczbe naturalna";
cin >> liczbanaturalna;

for(int i = 1; i <= liczbanaturalna; i++)
{
    suma += i;   
}
	cout << "liczba naturalna wynosi: " << suma << endl;
}