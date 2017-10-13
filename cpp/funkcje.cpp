/*

 */


#include <iostream>

using namespace std;

void sumuj (int a, int b) 
{
    cout << "Suma:" << a + b << endl;
}

void odejmij (int a, int b) 
{
    cout << "Różnica:" << a - b << endl;
}

void mnoz (int a, int b) 
{
    cout << "Iloczyn:" << a * b << endl;
}

void dziel (int a, int b) 
{
    if (b=0)
    cout << "Iloraz:" << a / b << endl;
    
}
int main(int argc, char **argv)
{
    int a , b;
    cout << "Podaj liczby:";
    cin >> a >> b;
    
    sumuj (a, b);
    odejmij  (a, b);
    mnoz (a, b);
    dziel (a, b);

	return 0;
}

