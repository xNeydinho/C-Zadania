#include <iostream>
using  namespace std;
int main(){

int N;
cout << "Podaj liczbe naturalna";
cin >> N;

for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
        // Ciało wewnętrznej pętli
        cout << i << " * " << j <<" = " << i*j << endl;
    }
    cout << endl;
}


}


