/*

 */


#include <iostream>

using namespace std;

//int liczba, krok;

int zwieksz() {
    int liczba, krok; //zmienne lokalne 
    liczba = liczba + krok;
    return liczba;
    }
    

int main(int argc, char **argv)
{
    int liczba, krok; // zmienne lokalne
    cout << "Podaj liczbę i krok:"; 
    cin >> liczba >> krok;
    
    cout << "Liczba i krok: " << liczba <<" "<< krok<< endl;
   //zwieksz();
    cout <<"Liczba i krok: " << zwieksz() <<" "<< krok<< endl;
	return 0;
}

