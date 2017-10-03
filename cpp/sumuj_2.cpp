/*
 * Program pobiera liczby od użytkownika aż ich suma przekroczy100.
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
   // int i;
    int suma=0;
    cout << "Wprowadzaj kolejne liczby:" << endl;
    int liczba = 0;
    int ilosc = 0;
    cout << "Podaj ilość liczb:" << endl;
    //for (;;)
    while (1) // pętla nieskończona 
    
    {
        cin >> liczba;
        ilosc ++;
        cout << " podano:" << liczba << endl;
        suma += liczba;
        if (suma > 100)
            break;
        };
        cout << "Suma liczb;" << suma << endl;
        cout << "Ilośc liczb" << ilosc << endl;
    
	return 0;
}

