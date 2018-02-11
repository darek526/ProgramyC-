#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch, key;
	printf("Podaj przesuniecie znakow: ");
	scanf("%d", &key);
	key%=26;
	if (key<0) key+=26;
	printf("\nPodaj tekst do zaszyfrowania ( Aby zamknac wcisnij < Ctrl + C >");
	while((ch=getchar())!=EOF){
		if(isupper(ch)) putchar('A'+(ch-'A'+key)%26);
		else if(islower(ch)) putchar('a'+(ch-'a'+key)%26);
		else putchar(ch);
	}
return 0;
}
