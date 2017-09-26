/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
    int bok = 0; // deklaracja inicjajcja zmiennej
    
   cout<<"Podaj bok: " ;
   cin >> bok;
   cout << "Obwód: " << 4 * bok << endl;
   cout << "Pole: "   << bok * bok << endl;  
   
	return 0;
}

