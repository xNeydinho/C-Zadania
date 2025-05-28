#include <iostream>
using  namespace std;
int main(){

int liczbanaturalna;
cout << "Podaj liczbe naturalna";
cin >> liczbanaturalna;

for(int i = 1; i <= liczbanaturalna; i += 2)
{
    cout << "Liczba nieparzysta: " << i << endl;
}
}
