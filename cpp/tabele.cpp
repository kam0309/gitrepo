/*
 * tabele.cpp
 */


#include <iostream>

using namespace std;

void pobierzliczby(int tab[], int ile) {
    int i= 0;
    for (i = 0; i < ile; i ++) {
        cout << "Podaj liczbe: ";
        cin >> tab[i];
    }
}
    void sumuj(int tab[], int ile) {
    int i= 0;
    int suma =0;
    for (i = 0; i < ile; i ++) {
        suma+= tab[i];
    }
    cout << "suma liczb: "<< suma << endl;        
}

void najminiejsza (int tab [], int ile){
    int = 0;
    int suma =0;
    //funkcja znajduje i drukuje njmniejsza liczbe z tabeli
    
    
    }
int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << "Ile liczb podasz: ";
    cin >> rozmiar;
   
   int liczby[rozmiar];
    
    pobierzliczby(liczby, rozmiar);
    sumuj (liczby , rozmiar);
        
   
	return 0;
}

