#include <iostream>
using  namespace std;
int main(){
	
int liczba1;
cout <<"Podaj liczbe N: " <<endl;	
cin >> liczba1;

int liczbyparzyste = 0;
int i = 1;


do {
	if (i % 2 == 0){

	liczbyparzyste++;}
	i++;
} while (i <= liczba1);
cout << "Suma liczb parzystych od 1 do " << liczba1 <<" wynosi: " << liczbyparzyste << endl;
}