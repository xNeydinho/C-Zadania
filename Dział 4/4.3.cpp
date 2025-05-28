#include <iostream>
using  namespace std;
int main(){
char kolejnaliczba;


do{
	
int liczba1;
cout <<"Podaj liczbe N: " <<endl;	
cin >> liczba1;
cout << "Wprowadziles liczbe: " << liczba1 <<endl;

cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n)" << endl;
cin >> kolejnaliczba;
} while (kolejnaliczba == 't' || kolejnaliczba == 'T');
cout << "Dziekuje za wprowadzenie liczb!" << endl;
}