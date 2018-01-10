/*
 * Warzycki_ułamek.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b;
    cout << "Podaj licznik: " << endl;
    cin >> a;
    cout << "Podaj mianownik: " << endl;
    cin >> b;
    
    for (int i = b; i >1;i++){
        if (a % i == 0)
        {
        if (b % i == 0)
        {
        a = a / 1;
        b = b /1;
    }}
        }
        cout << "ułamek po skróceniu wynosi: " << a <<"/" << b << endl;
	return 0;
}

