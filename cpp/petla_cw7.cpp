/*
 * petla_cw7.cpp
 */


#include <iostream> 

using namespace std;

int main(int argc, char **argv)
{
    int m = 0;
    for(int i=0; i < 3; i++)
    { 
         cout << "Podaj numer:";
         cin >> m;
         if(m>0 && m < 12) break;
         
         
         
    else cout<<"złe dane:" << endl;
}


	return 0;
}

