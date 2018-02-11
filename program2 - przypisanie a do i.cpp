#include <stdio.h>

int main(){
	int i = 1;
	int *a;
	
	a = &i; 
	printf("%d" , i);
	*a = 6;
	printf("%d\n", i);
	
return 0;
}
