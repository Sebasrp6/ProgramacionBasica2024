#include<iostream>

float m1, m2, m3, multiplicacion;
using namespace std;
int main ()
{
    cout<<"inserte un numero ";
    cin>>m1;
    cout<<"inserta otro numero ";
    cin>>m2;
    cout<<"inserta un ultimo numero ";
    cin>>m3;
    multiplicacion=m1*m2*m3;
    cout<<"Multiplicacion de los 3 numeros es: "<<multiplicacion;
    return 0;
}