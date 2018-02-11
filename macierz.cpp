#include <stdio.h>
int main(){
	const int kwa = 10;
	float Macierz[kwa][kwa];
	
	for(int i = 0; i < kwa; ++i)
	for(int j = 0; j < kwa; ++j)
			Macierz[i][j] =   i == j ? 0 : 1;
	for(int i = 0; i < kwa; ++i){
	
			for(int j=0; j < kwa; ++j)
				printf("%f ", Macierz[i][j]);
			printf("\n");
			
			}
}
