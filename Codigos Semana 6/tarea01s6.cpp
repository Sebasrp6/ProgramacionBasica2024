//Ejercicio 1 - Semana 6, Datos de un vector a ingresar de forma ascendente
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int tvector;
    cout<<"Ingrese tamano del vector: ";
    cin>>tvector;
    vector<int> VectorO(tvector);
    cout<<"Ingresa los datos del vector: "<<endl;
    for (int i = 0; i < tvector; ++i) {
        cout << "Dato: " << i + 1 << ": ";
        cin >> VectorO[i];
    }
    sort(VectorO.begin(), VectorO.end());
    cout << "Vector ordenado de forma ascendente: ";
    for (const auto& numero : VectorO) {
    cout << numero << " ";
}

    
    return 0;

}