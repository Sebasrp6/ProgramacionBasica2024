// Ejercicio 8 - Semana 4, El mayor detenible de un vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {5, 8, 3, 12, 7, 10}; 

    int mayor = numeros[0];

    for (int i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            break;
        }
    }

    cout << "El mayor elemento en el vector es: " << mayor << endl;

    return 0;
}