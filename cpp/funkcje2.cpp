/*

 */


#include <iostream>

using namespace std;

int sumuj (int a, int b) 
{
    return a + b;
}

int odejmij (int a, int b) 
{
   return a - b;
}

int mnoz (int a, int b) 
{
    return a * b;
}

int dziel (int a, int b) 
{
    
    return a / b;
    
}
int main(int argc, char **argv)
{
    int a , b;
    cout << "Podaj liczby:";
    cin >> a >> b;
    
    int Suma = sumuj(a , b);
    int Roznica = odejmij(a , b);
    int Iloczyn = mnoz(a , b);
    int Iloraz = dziel(a , b);
    
    cout <<"Suma:" << Suma << endl;
    cout <<"różnica:" << Roznica << endl;
    cout <<"Iloczyn:" << Iloczyn << endl;
    cout <<"Iloraz:" << Iloraz << endl;

	return 0;
}

