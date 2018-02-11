//Cwiczenia
 
#include <stdio.h>    //biblioteka wejscia-wyjscia
#include <stdlib.h>   //biblioteka z komenmdami sterujacymi
#include <conio.h>
#include <math.h>	  //biblioteka matematyczna


int wybor, a, b, suma, srednia, i, j;
void tabela();


int main() {

	printf("Cwiczenia 07.12.2017 r. \n \n");
	printf("Prosze dokonac wyboru z powyzszej listy: \n \n");
	printf("1. Wprowadzanie 10 znakow \n \n");
	printf("2. Obliczanie sumy liczb \n \n");
	printf("3. Obliczanie sredniej arytmetycznej \n \n");
	printf("4. Wyjscie z programu \n \n");

{

	int wybor;
	scanf("%i", &wybor);
	
	switch (wybor)
	{
		case '1':
		printf("Wybrales wprowadzanie znakow \n\n");
		int tab[10];{ // deklaracja zmiennej tablicowej 
		int i,j; 
		printf("wprowadz 10 znakow, po kazdym enter: \n\n"); 
		for(i=0; i<10; i++) // pierwsza pêtla 
		scanf(" %c",&tab[i]); 
		printf("\n Liczby wypisane z tablicy: \n"); 
		for(j=0; j<10; j++) // druga pêtla 
		printf(" %c",tab[j]); 
		getch(); 

		return 0;
		}
		break;
		
		case '2':
		printf("Obliczanie sumy \n\n");
		void tabela();
		if (a!=b); {printf("Nie zgadza sie ilosc zadeklarowanych i podanych znakow \n\n"); return 0;} 
		if 
		else (a==b); {printf("Suma podanych liczb wynosi: "), suma;
		
		break;
		
		case '3':
		printf("Obliczanie sredniej arytmetycznej \n\n");
		void tabela();
		break;

		case '4':
		break; 
		
		default:
		printf("Podales zly wybor \n");  


	}}
	
void tabela();{
		int a, b; 
		printf("Podaj dla ilu znaków chcesz dokonaæ wyliczen: \n\n");   
		scanf(" %i", tab[a]);
		int tab[a];{ // deklaracja zmiennej tablicowej 
		
		printf("Wprowadz znaki, dla ktorych chcesz wyliczyc sume. Kazdy znak zatwierdz poprzez enter. \n\n"); 
		for(b=0; b++) // pierwsza pêtla 
		scanf(" %c",&tab[b]); 
		getch(); }
		}
		
		// trzeba policzyæ ilosc wprowadzonych znakow oraz wczesniej dzialanie
	}

		
return 0; 

}





