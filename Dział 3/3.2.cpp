#include <iostream>
using  namespace std;
int main(){
	
int liczba1;
cout <<"Podaj temperature w stopniach celsjusza " <<endl;	
cin >> liczba1;


char temperatura;
cout <<"Wybierz jednostke docelowa (K - Kelvin, F- Farenheit): " <<endl;
cin >> temperatura;
	
switch(temperatura){
	case 'K':
		cout <<"Temperatura w stopniach Kelvina wynosi: " << (liczba1 + 273.15) <<endl;
		break;
	case 'F':
		cout << "Temperatura w stopniach Farenheita wynosi: " << ((liczba1 * 9/5) +32) << endl;
		break;
	default:
		cout << "Zla jednostka" <<endl;
		break;
}
	
	
}