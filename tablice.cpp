#include <stdio.h>
#include <string.h>

int main ()
{
	char ciag1[80];
	char ciag2[80];
	int wynik;
	
	printf("Podaj pierwszy ciag: "); gets(ciag1); 	//wczytuje podany przez nas ciag znakow
	printf("Podaj drugi ciag: "); gets(ciag2);
	
	wynik = strcmp(ciag1, ciag2); 			//porownanie dwoch ciagow np. baba i kot, wyswietli -1 co oznacza, ze pierwszy ciag jest wyzej alfabetycznie
	printf("\n %d\n", wynik);
	
	return 0;
}
