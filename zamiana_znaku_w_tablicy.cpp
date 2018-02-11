#include <stdio.h>

int main (){
	char Napis[10] = "Waniki.";
	//*(Napis + 1) = 'y';        //pierwsza mozliwosc
	Napis[1] = 'y';				//druga mozliwosc
	
	printf(" %s \n", Napis);
	return 0;
}


