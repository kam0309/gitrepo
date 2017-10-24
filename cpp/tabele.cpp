/*
 * tabele.cpp
 */


#include <iostream>

using namespace std;


void ile5(int tab[], int ile){
    int i;
    int licznik =0;
    for (i=0; i < ile; i ++){
        if (tab[i] % 5 == 0 )
        licznik5++;
        
        
        }
    cout << "Podzielnych przez 5: " << licznik5 << endl;
    
    }

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

void najmniejsza (int tab [], int ile){
    int mini = tab[0];
    for (int i = 1; i < mini; i ++) {
        if (mini > tab[i])
        mini= tab[i];
    }
    cout << "najmiejsza liczba: " << mini << endl;
}
    //funkcja znajduje i drukuje njmniejsza liczbe z tabeli
    
    

int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << "Ile liczb podasz: ";
    cin >> rozmiar;
   
   int liczby[rozmiar];
    
    pobierzliczby(liczby, rozmiar);
    sumuj (liczby , rozmiar);
    najmniejsza(liczby , rozmiar);
    ile5 (liczby , rozmiar);
   
	return 0;
}

