#include <iostream>
using  namespace std;
int main(){
	
int liczba1;
cout <<"Podaj liczbe N: " <<endl;	
cin >> liczba1;

int liczbapowtorzen = 0;
int naturalne = 0;

while(liczbapowtorzen <= liczba1)
{

    naturalne += liczbapowtorzen ;
	liczbapowtorzen += 1; 
}
cout << "Suma liczb naturalnych do " << liczba1 <<": "<< naturalne << endl;


}