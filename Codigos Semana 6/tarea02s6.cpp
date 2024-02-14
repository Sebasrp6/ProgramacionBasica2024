//Ejercicio 2 - Semana 6, Concatenar las palabras de un vector ingresado
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int vstring;
    cout<<"Ingrese tamano del vector: ";
    cin>>vstring;
    vector<string> VectorS(vstring);
    cout<<"Ingresa los datos del vector: "<<endl;
    for (int i = 0; i < vstring; ++i) {
        cout << "Dato: " << i + 1 << ": ";
        cin >> VectorS[i];
    }
    for (int i = 0; i < vstring; ++i) {
        cout << VectorS[i] << " ";
    }
}
