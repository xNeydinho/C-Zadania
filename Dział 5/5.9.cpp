#include <iostream>
using  namespace std;
int main(){

int suma = 0;


for(int setki = 1; setki <= 9; setki++) {
	for (int dziesiatki = 0; dziesiatki  <= 9; dziesiatki++) {
		for (int jednosci = 0; jednosci <=9; jednosci++) {
			if (setki != dziesiatki && setki != jednosci && dziesiatki != jednosci) {
                    std::cout << setki << dziesiatki << jednosci << " ";
                    suma++;
		} 
	}
	}
}
	cout << "\n\n\nliczba wszystkich powtarzajacych sie liczb wynosi: " << suma << endl;

}