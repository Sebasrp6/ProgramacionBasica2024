// Calcular el promedio de los numeros y cuales son mayores
#include <iostream>
using namespace std;

int main() {
    double suma = 0;
    double promedio, numeros[10];  

    for (int i = 0; i < 10; ++i) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = suma / 10;

    cout << "El promedio de los 10 numeros es: " << promedio << endl;

    for (int i = 0; i < 10; ++i) {
        if (numeros[i] > promedio) {
            cout << "El numero " << numeros[i] << " es mayor al promedio." << endl;
        }
    }

    return 0;
}
