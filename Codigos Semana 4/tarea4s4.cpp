// Ejercicio 4 - Semana 4, Sucesion de Collatz
#include <iostream>

using namespace std;

int main() {
    int n1;
    cout << "Ingresa un numero: ";
    cin >> n1;

    int original = n1;
    int final;

    while (n1 > 1) {
        if (n1 % 2 == 0) {
            n1 = n1 / 2;
        } else {
            n1 = (n1 * 3) - 1;
        }

        final = n1;  
    }

    cout << "El numero original era " << original << ". Ahora es " << final << endl;

    return 0;
}
