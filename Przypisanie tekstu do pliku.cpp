#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	char data[100];
	//char plik[]="C:\U¿ytkownicy\User\Pulpit\WSPol\Dylewski\Temp\Pliki\plik.txt" 
	
	ofstream nazwa;		//ofstream - strumien wczytujacy do pliku (wychodzi z programu i wchodzi do pliku), ifstream - strumien wczytujacy z pliku
	nazwa.open("C:/WSPol/Temp/plik.txt"); 	//otwarcie pliku
	
	cout << "Wpisz tekst" << endl;
	cin.getline(data,100); 	//wczytanie tekstu z klawiatury
	nazwa << data << endl;	//przypisanie tekstu (data) do pliku (nazwa)
	nazwa.close();	//zamkniecie pliku
	
}
