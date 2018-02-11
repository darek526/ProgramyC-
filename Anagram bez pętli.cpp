#include <algorithm>   //dzieki tej bibliotece nie musimy robic petli przy sortowaniu i porownaniu dlugosci wyrazow
#include <iostream> 

using namespace std; 
bool anagram(string slowo1,string slowo2)

 
{ 
	if(slowo1.size()!=slowo2.size())  //sprawdzam czy słowa maja taką sama dlugosc 
    return 0;                         //jesli nie są program zakonczy sie
                                      //jesli są równe to sortuje babelkowo
    sort(slowo1.begin(),slowo1.end()); 
    sort(slowo2.begin(),slowo2.end()); 
    if(slowo1==slowo2) 
return 1;                             //jesli maja takie same znaki wynik jest prawdą
return 0;                             //jesli nie wynik odpowiedzią jest falsz
}
 int main() 
{
	
 string slowo1,slowo2;
 cout <<" ====================="<<endl;
 cout <<" +      Zadanie      +"<<endl;
 cout <<" +      ANAGRAM      +"<<endl;
 cout <<" ====================="<<endl;
 
 
 
 
 cout <<" Wpisz pierwsze słowo"<<endl; 
 cout <<"       ";cin>>slowo1;
 cout <<" Wpisz drugie słowo" <<endl;
 cout <<"       ";cin>>slowo2;
 
 if (anagram(slowo1,slowo2))         //gdy prawda wyswietl "potwierdzenie"
 cout << "Słowa są anagramem";
 else                                //jesli nie wyswietl "zaprzeczenie"
 cout << "Słowa nie są anagramem";
 
return 0; 
}
