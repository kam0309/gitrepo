/*
 * imie.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
     char imie[10];
    
   cout << "Witaj w C++!"<< endl;	
   cout << "podaj imię";	
   cin >> imie;
   cin.getline(imie, 10) ;
   cout << "Cześć, " << imie << "!" << endl;
   
	return 0;
}
