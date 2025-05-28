#include <iostream>
using  namespace std;
int main(){

int liczbanaturalna;
cout << "Podaj liczbe naturalna";
cin >> liczbanaturalna;

for(int i = 1; i <= liczbanaturalna; i++)
{
    // Wypisz liczby
    cout << i << "^2 = " << i * i << std::endl;
}
}