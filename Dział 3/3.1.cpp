#include <iostream>
using  namespace std;
int main(){
	
int liczba1;
cout <<"Podaj pierwsza liczbe " <<endl;	
cin >> liczba1;

int liczba2;
cout <<"Podaj druga liczbe " <<endl;	
cin >> liczba2;

char dzialanie;
cout <<"Podaj znak dzialania (+, -, *, /) " <<endl;
cin >> dzialanie;

switch(dzialanie){
	case '+':
		cout <<"Dodawanie, wynik to: " << (liczba1 + liczba2) <<endl;
		break;
	case '-':
		cout << "Odejmowanie, wynik to: " << (liczba1 - liczba2) <<endl;
		break;
	case '*':
		cout << "Mnozenie, wynik to: " << (liczba1 * liczba2) <<endl;
		break;
	case '/':
		if (liczba1 == 0 || liczba2 == 0){
		
			cout << "liczba nie moze byc zerem" <<endl;
			break;
		}
		else{
			cout << "Dzielenie, wynik to: " << (liczba1 / liczba2) <<endl;
			break;
		}
	default:
		cout << "Podaj poprawne wartosci" <<endl;
		break;

}




	
	
	
	
	
	
	
}