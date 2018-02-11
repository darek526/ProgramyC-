#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(){
	
	bool dalej = true;
	int i, gdzie = -1;
	int szukany = 333;
	int tab[N] = {0, 1, 333};
	
	for (i = 0; i < N && dalej; ++i){
		if ( tab[i] == szukany ){
			dalej = false;
		}
	}
	
	gdzie = i;
	
	printf("%d", gdzie);
	
	return 0; 
}
