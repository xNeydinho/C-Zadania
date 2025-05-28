#include <iostream>
using  namespace std;
int main(){
	
int liczba1;
int liczba2;
cout <<"Podaj pierwsza liczbe" <<endl;
cin >> liczba1;
cout << "Podaj druga liczbe:" <<endl;
cin >> liczba2;

cout << "Suma: " << liczba1+liczba2 <<endl;
int stan;
if ((liczba1+liczba2)%2==1){

cout << "Suma jest liczba nieparzysta" <<endl;
}
else{
	cout << "Suma jest liczba parzysta";
}
 
}