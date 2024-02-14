/*- Se tiene N frutas en una tienda, estas son almacenadas en un registro (el alumno coloca el número de atributos a almacenar), se pide:
o Crear la estructura
o Registro de frutas
*/
#include <iostream>
#include <string>
using namespace std;
struct frutas {
    string nombre;
    double precio;
    double cantidad;
};
int main() {
    int n;
    cout<<"Ingrese el numero de frutas: ";
    cin>>n;

    
    frutas frutas[n];
    for (int i = 0; i < n; ++i) {
        cout<<"Ingrese el nombre de la fruta: "<<i+1<<": ";
        cin>>frutas[i].nombre;

        cout<<"Ingrese el precio por Kilo de la fruta: "<<i+1<<": ";
        cin>>frutas[i].precio;

        cout<<"Ingrese la cantidad de kilos de frutas: "<<i+1<<": ";
        cin>>frutas[i].cantidad;
    }

    cout<<"\nRegistro de Frutas:\n";
    for (int i = 0; i < n; ++i) {
        cout<<"Fruta "<<i+1<<": "<<frutas[i].nombre<<", Precio por Kilo: S/"<<frutas[i].precio<<", Cantidad de Kilos: "<<frutas[i].cantidad<<endl;
    }
    return 0;
}
