/*
 * Warzycki_lokata.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int suma;
    int ile;
    int wplata;
    cout <<"Wprowadź ile wpłaciłeś: " << endl;
    cin >> ile;
    wplata = 100;
    suma  = 0;  
    for(int i = 0; i < ile; i++){
        suma += wplata;
        suma += 10;
        }
        cout <<"Ostatnia wpłata wyniosła: " << wplata - 10 << endl;
        cout <<"Stan konta: " << suma << endl;
	return 0;
}

