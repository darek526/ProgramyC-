#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch, i; 
	printf("\nPodaj tekst do odszyfrowania z malych liter ( Aby zamknac wcisnij < Ctrl + C >");
	while((ch=getchar())!=EOF){
	
			putchar('a'+(ch-'a'+1)%26); 
			putchar('a'+(ch-'a'+2)%26);
			putchar('a'+(ch-'a'+3)%26);
			putchar('a'+(ch-'a'+4)%26);
			putchar('a'+(ch-'a'+5)%26);
			putchar('a'+(ch-'a'+6)%26);
			putchar('a'+(ch-'a'+7)%26);
			putchar('a'+(ch-'a'+8)%26);
			putchar('a'+(ch-'a'+9)%26);
			putchar('a'+(ch-'a'+10)%26);
			putchar('a'+(ch-'a'+11)%26);
			putchar('a'+(ch-'a'+12)%26);
			putchar('a'+(ch-'a'+13)%26);
			putchar('a'+(ch-'a'+14)%26);
			putchar('a'+(ch-'a'+15)%26);
			putchar('a'+(ch-'a'+16)%26);
			putchar('a'+(ch-'a'+17)%26);
			putchar('a'+(ch-'a'+18)%26);
			putchar('a'+(ch-'a'+19)%26);
			putchar('a'+(ch-'a'+20)%26);
			putchar('a'+(ch-'a'+21)%26);
			putchar('a'+(ch-'a'+22)%26);
			putchar('a'+(ch-'a'+23)%26);
			putchar('a'+(ch-'a'+24)%26);
			putchar('a'+(ch-'a'+25)%26);
			
	}
return 0;
}
