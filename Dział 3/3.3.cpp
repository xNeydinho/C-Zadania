#include <iostream>
using  namespace std;
int main(){
	

int liczba1;
cout <<"Podaj liczbe godzin parkowania: " <<endl;	
cin >> liczba1;

char rodzaj;
cout <<"Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus) " <<endl;
cin >> rodzaj;

switch (rodzaj){
	case'S':
	case's':
		cout<<"Oplata za parkowanie wynosi " << (liczba1 * 5)<<" zl"<<endl;
		break;
	case'M':
	case'm':
		cout<<"Oplata za parkowanie wynosi " << (liczba1 * 3)<<" zl"<<endl;
		break;
	case'A':
	case'a':
		cout<<"Oplata za parkowanie wynosi " << (liczba1 * 10)<<" zl"<<endl;
		break;
	default:
		cout<<"Prosze podac prawidlowe wartosci" <<endl;
		break;
	}
}