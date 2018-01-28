/*
 * złożona.cpp
 */

#include <iostream>

using namespace std;
 
int main()
{
    int n;
    cout<<"Podaj liczbę: ";
    cin>>n;
  
    int i = 2;
    
        while(true)
        {
            if(i*i <=n)
            {
                if(n%i==0)
                {
                    cout<<"Liczba zlozona!";
                break;
                }
                else
                i = i + 1;
            }
            else
            {
                cout <<"Liczba pierwsza!";
                break;
            }
        }
 
	
	return 0;
}
