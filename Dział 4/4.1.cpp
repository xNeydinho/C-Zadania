#include <iostream>
using  namespace std;
int main(){
	
int liczba1;
cout <<"Podaj liczbe N: " <<endl;	
cin >> liczba1;

cout << "liczby parzyste od 2 do " << liczba1 << endl;
int parzyste = 2;

while(parzyste <= liczba1)
{

    cout << parzyste << endl;
    parzyste += 2; 
}



}