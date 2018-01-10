/*
 * Warzycki_dzielniki.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int wartosc;
    cout <<"Podaj wartość: " << endl;
    cin >> wartosc;
    cout <<"Podaj dzielnik liczby: " << wartosc <<"wynoszą: " <<endl;
    for(int i = wartosc; i > 0; i--){
        if (wartosc % 1 == 0)
            cout << wartosc / 1 << " " << endl;
        
        }
	return 0;
}

