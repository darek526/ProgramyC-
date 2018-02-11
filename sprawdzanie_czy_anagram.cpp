#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
 
void sortuj(string &napis)
{
	for(int i=0, zamiany=1; i<napis.length()-1 && zamiany!=0; i++)
	{
		zamiany=0;
		for(int j=0; j<napis.length()-1; j++)
			if(napis[j]>napis[j+1])
			{
			swap(napis[j], napis[j+1]);
			zamiany++;	
			} 
	}
}
bool czy_anagramy(string napis1, string napis2)
{
	if(napis1.length()!=napis2.length()){ 
	cout << "\nWyrazy nie sa anagramami\n\n";
	return 0;}
	
	sortuj(napis1);
	sortuj(napis2);
	
	if(napis1==napis2) cout << "\nWyrazy sa anagramami.\n\n";
	else 
	cout << "\nWyrazy nie sa anagramami.\n\n";
}
int main()
{
	string a, b;
	cout << "Podaj pierwszy napis: ";
	cin >> a;
	cout << "Podaj drugi napis: ";
	cin >> b;
	czy_anagramy(a, b);
	system("pause");
	return 0;
}

/* Algorytm: 
1. wczytaj pierwszy wyraz
2. wczytaj drugi wyraz
3. sprawdz dlugosc wyrazow
	a. jesli rozne to wypisz, ze wyrazy nie sa anagramami
4. posortuj 1. wyraz
5. posortuj 2. wyraz
6. sprawdzamy czy posortowane ciagi znakow sa sobie rowne
	a. jesli sa rowne to wypisz, ze wyrazy sa anagramami
	b. jesli nie sa rowne to wypisz, ze wyrazy nie sa anagramami
	*/
