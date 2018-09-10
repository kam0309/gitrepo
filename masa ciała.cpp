/*
 * masa ciała.cpp 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{ 
    float masa;
    float wzrost;
    float bmi;
    cout <<"podaj mase ciała:";
    cin >> masa; 
    cout <<"podaj wzrost:";
    cin >> wzrost; 
    bmi = masa / ( wzrost * wzrost )*10000;
    cout <<"twoje bmi to:" << bmi <<endl;
	
    if(bmi < 18,5)
        cout <<"niedowaga";
    else(bmi >= 18,5 && bmi < 24,9)
        cout <<"norma";
    else(bmi >=25 && bmi < 30)
        cout <<"nadwaga";
    else(bmi >= 30)
    cout <<"otyłość";
    
	return 0;
}

