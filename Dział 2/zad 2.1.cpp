#include <iostream>
using  namespace std;
int main(){
	
	cout << "Podaj wynik egzaminu w punktach" <<endl;
	int wynik;
	cin >> wynik;
	
	if (wynik <= 49 && wynik >= 0){
	cout << "Ocena niedostateczna";
	}
	else if (wynik >= 50 && wynik <= 69){
	cout << "Ocena dostateczna";
	}
	else if (wynik >= 70 && wynik <= 84){
		cout <<"Ocena dobra";
	}
	else if (wynik >= 85 && wynik <= 99){
		cout << "Ocena bardzo dobra";

	}
	else if (wynik == 100){
		cout <<"Ocena celujaca";
	}
	else if (wynik > 100 || wynik < 0){
		cout << "Podaj poprawny wynik (miedzy 0 a 100)";
	}
return 0;
	
}