#include<iostream>

float dsoles, ddolares, deuros, drealesbrasilenos;
using namespace std;
int main ()
{
    cout<<"Inserta tu dinero en soles";
    cin>>dsoles;
    ddolares=(dsoles*3.69);
    deuros=(dsoles*4.05);
    drealesbrasilenos=(dsoles*0.76);
    cout<<"Tu dinero en dolares es: "<<ddolares<<endl;
    cout<<"Tu dinero en Euros es: "<<deuros<<endl;
    cout<<"Tu dinero en Reales Brasilenos es: "<<drealesbrasilenos<<endl;
    return 0;
}