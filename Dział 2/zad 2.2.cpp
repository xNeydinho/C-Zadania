#include <iostream>
using  namespace std;
int main(){
	


	cout << "Podaj mase ciala " << endl;
	float masa;
	cin >> masa;
	cout << "Podaj wzrost " << endl;
	float wzrost;
	cin >> wzrost;
	
		
	float bmi;
	bmi = masa/(wzrost*wzrost);
	
	if (bmi < 18.5 ){
		cout << "BMI wynosi: " << bmi << endl;
		cout << "Twoj stan wagowy: Niedowaga";
	}
	else if (bmi >= 18.5 && bmi<=24.9){
		cout << "BMI wynosi: " << bmi << endl;
		cout << "Twoj stan wagowy: W normie";
	}
	else if (bmi >= 25 && bmi <= 29.9){
		cout << "BMI wynosi: " << bmi << endl;
		cout << "Twoj stan wagowy: Nadwaga";
	}
	else if (bmi >= 30){
		cout << "BMI wynosi: " << bmi << endl;
		cout << "Twoj stan wagowy: Otylosc";
	}
	
	
	
	return 0;
}