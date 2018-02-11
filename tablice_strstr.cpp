#include <stdio.h>
#include <string.h>

int main ()
{
	char ciag1[80];
	char ciag2[80];
	char *tymczasowy; 
	int wynik;
	
	printf("Podaj pierwszy ciag: "); gets(ciag1); 	//wczytuje podany przez nas ciag znakow
	printf("Podaj drugi ciag: "); gets(ciag2);
	
	wynik = strcmp(ciag1, ciag2); 			//porownanie dwoch ciagow np. baba i kot, wyswietli -1 co oznacza, ze pierwszy ciag jest wyzej alfabetycznie
	printf("\nWynik porownania: %d\n", wynik);
	
	tymczasowy = strstr(ciag1, ciag2);
	printf("\nstrstr wynosi: %s\n", tymczasowy);
	
	return 0;
}
