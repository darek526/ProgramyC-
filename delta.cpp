#include <iostream>
#include <math.h>

using namespace std;

main ()
{
	float a, b, c, delta;
	
	cout << "podaj wartosc a: \n";
	cin >> a;
	cout << "podaj wartosc b: \n";
	cin >> b; 
	cout << "podaj wartosc c: \n";
	cin >> c;
	
	delta = (b*b) - (4*a*c);
	
	cout << "\n Delta wynosi: " << delta; 

	
	return 0;
}


