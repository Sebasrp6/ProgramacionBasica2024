#include<iostream>

float no1, no2, no3, promedio;
using namespace std;
int main ()
{
    cout<<"Inserta tu primera nota: ";
    cin>>no1;
    cout<<"inserta tu segunda nota: ";
    cin>>no2;
    cout<<"inserta tu ultima nota: ";
    cin>>no3;
    promedio=((no1+no2+no3)/3);
    cout<<"Tu promedio final es: "<<promedio;
    return 0;
}