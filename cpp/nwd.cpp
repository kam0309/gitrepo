/*
 * nwd.cpp
 */


#include <iostream> 

using namespace std;

int nwd_1(int a,int b)
{
    //int a,b;
    while (a != b)
        if (a > b)
            a = a - b;
        else
                b = b - a;
    return a;
        }
int nwd_2(int a, int b)
{
    while (a > 0)
            a = a % b;
            b = b - a;
    return b;
        }
int main(int argc, char **argv)
{
    int a , b;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> a ;
    cout << "Podaj druga liczbe" << endl;
    cin >> b;
    cout <<"Najwiekszy wspolny dzielnik: " << nwd_2(a,b) << endl;
	return 0;
}

