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
	
	tymczasowy = strstr(ciag1, ciag2); 			//sprawdza czy ciag2 zawiera sie w ciagu1
	printf("\nstrstr wynosi: %s\n", tymczasowy ? tymczasowy : "nie zawiera");  //w przypadku 1-prawdy wyswietli "strstr wynosi: ", jesli 0-falsz wyswietli "nie zawiera"
	
	tymczasowy = strcat(ciag1, ciag2);  	//funkcja ta daje jakby wyniki ciag1=ciag1+ciag2
	printf("Wynik polaczenia: %s\n", ciag1);  		//ten wiersz i ten ponizej daja ten sam efekt
	printf("Wynik polaczenia: %s\n", tymczasowy);
	
	return 0;
}
