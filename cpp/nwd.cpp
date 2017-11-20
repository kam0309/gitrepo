/*
 * nwd.cpp
 */


#include <iostream> 

using namespace std;

int nwd(int a,int b)
{
    //int a,b;
    while (a != b)
        if (a > b)
            a = a - b;
        else
                b = b - a;
    return a;
        }
int main(int argc, char **argv)
{
    int a , b;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> a ;
    cout << "Podaj druga liczbe" << endl;
    cin >> b;
    cout <<"Njwiekszy wspolny dzielnik: " << nwd(a,b) << endl;
	return 0;
}

