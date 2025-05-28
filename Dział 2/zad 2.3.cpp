#include <iostream>
using  namespace std;
int main(){
	
int liczba;
cout <<"Podaj liczbe calkowita" <<endl;
cin >> liczba;

if (liczba%2 == 0){
cout <<"Liczba "<< liczba <<" jest parzysta"<<endl;
}
else if (liczba %2 == 1){
cout <<"Liczba "<< liczba <<" jest nieparzysta" << endl;
}

if (!(liczba%3)){
cout <<"Liczba " << liczba << " jest podzielna przez 3";
}
else if (liczba%3 != 0){
	cout <<"Liczba " << liczba << " nie jest podzielna przez 3";
}
return 0;
}