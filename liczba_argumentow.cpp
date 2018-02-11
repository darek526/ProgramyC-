#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	int licznik=0;
	for (int i=0; i < argc; ++i)
	{
		cout << argv[i] << endl;
		//licznik++;
	}
	cout << "Liczba argumentow" << argc << endl;
	for (int i = 1; i < argc; ++i)
	{
		cout << argv[i] << endl;
		//licznik++;
		
	}
	return 0;
}


