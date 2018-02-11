#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	int liczba;
	
	cout << "Podaj liczbe w systemie dziesietnym do konwersji na system binarny: ";
    cin >> liczba;

	cout << "\nWynik w systemie binarnym (czytany od tylu): ";

		do{
              cout << liczba % 2;
              liczba /= 2;
		}
		while(liczba > 0);

	cout << "\n\nAby zakonczyc wcisnij dowolny klawisz.\n\n";
	getch();

	return 0;
}

/* Algorytm: 
1. Wczytaj liczbê w systemie dziesiêtnym
2. Dziel liczbê przez 2 z reszt¹ wypisuj¹c kolejno resztê, tak dlugo dopóki dzielna jest > 0
3. Wypisz wynik w postaci reszt z dzielenia (0 lub 1) - czytane od koñca
*/

