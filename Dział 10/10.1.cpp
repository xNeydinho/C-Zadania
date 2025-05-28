#include <iostream>
using namespace std;

int main() {
int liczba1 = 5;
int liczba2 = 10;         
int *wskaznik = &liczba1;  
int *wskaznik2 = &liczba2;


cout << "Przed modyfikacja: " << endl;
cout << "a: " << *wskaznik << endl;
cout << "b: " << *wskaznik2 << endl;


*wskaznik = 15;
*wskaznik2 = 20;

cout << "Po modyfikacji:"
cout << "a: " << *wskaznik << endl;
cout << "b: " << *wskaznik2 << endl;


}