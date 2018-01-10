/*
 * sortowanie.cpp
 */


#include <iostream>

using namespace std;


void sort_wstaw(int tab[], int n)
{
    // insert sort
    cout << " ------------- Sortowanie przez wstawianie ---------------" << endl;
	int i, k, el;
    for (i = 1; i < n; i++)
    {    el = tab[i];
        k = i - 1;
        while (k >= 0 && tab[k] > el)  // wyzsukiwanie pozycji
        {    tab[k + 1] = tab[k];  // przesuwanie elementów
            k = k - 1;
        }
        tab[k + 1] = el;
	}
}


int main(int argc, char **argv)
{
    int ile = 10;
    return 0;
}

