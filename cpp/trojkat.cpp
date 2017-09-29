/*
 * hello.cpp
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    
    int a,b,c;
    int obwod = 0;
    float p ;
    float pole ;
    a = b = c =0;
    cout<<"Podaj bok: " ;
   cin >> a >> b >> c;
   //~if (a + b > c ){ 
       //~if (a + c > b) { 
       //~if(b + c > a){
           //~cout << "Da się utworzyć";
           //~}    
           //~}
       //~}
    if (a + b > c && a + c > b && b + c > a) {
        obwod = a + b + c;
        cout << "Obwód: " << obwod << endl;
        p = 0.5 * obwod;
        cout << "współczynnik: " << p << endl;
        pole = sqrt(p*(p - a)*(p-b)*(p - c));
        cout << "Pole ma" << pole;
    } else {
        cout << "Nie da się" ;
    }
     
   
	return 0;
}

