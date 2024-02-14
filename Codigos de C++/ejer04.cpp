#include<iostream>

float preciototal, descuento, nuevoprecio, porcentaje;
using namespace std;
int main ()
{
    cout<<"ingresa el precio de tu compra ";
    cin>>preciototal;
    if (preciototal!=0);
        porcentaje=10;
        descuento=(preciototal/porcentaje);
        nuevoprecio=preciototal-descuento;
        cout<<"El nuevo precio es "<<nuevoprecio;
    return 0;
}
    