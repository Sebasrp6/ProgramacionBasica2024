#include<iostream>

float dineroobtenido, materiales, ganancia;
using namespace std;
int main ()
{
    cout<<"Inserta tu dinero obtenido hoy: ";
    cin>>dineroobtenido;
    materiales=dineroobtenido/5;
    ganancia=dineroobtenido-materiales;
    cout<<"La ganancia del dia de hoy es: "<<ganancia;
    return 0;
}