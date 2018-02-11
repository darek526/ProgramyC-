#include <stdio.h>
#include <math.h>

struct Z
{
	double re;
	double im;
};

struct Z dodaj (struct Z x, struct Z y)
{
	double z;
	z.re = x.re + y.re;
	z.im = x.im + y.im;

	return z;
}

int main ()
{
	Z a={0.1, 5.1}, b={=1.3, 2.4};
	Z wynik;
	double wynik = dodaj (a, b);
	printf("Wynik to %f", wynik);
	
	return 0; 
}
