/*- Se tiene N números, sobre la operación a realizar el alumno tomara la decisión, se pide
o Funciones paso por valor
o Funciones paso por referencia*/
#include <iostream>
using namespace std;

void ingresat(int &c) {
    cout << "Elige el tipo de operacion: " << endl;
    cout << "1: Suma" << endl;
    cout << "2: Resta" << endl;
    cout << "3: Doble" << endl;
    cout << "4: Mitad" << endl;
    cin >> c;
}

void ingresar(int &a, int &b) {
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
}

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

void doble(int &a, int &b) {
    a *= 2;
    b *= 2;
}

void mitad(int &a, int &b) {
    a /= 2;
    b /= 2;
}

int main() {
    int a, b, c;
    ingresat(c);
    ingresar(a, b);

    switch (c) {
        case 1:
            cout<<"La suma de los 2 numeros es: "<<suma(a, b)<<endl;
            break;
        case 2:
            cout<<"La resta de los 2 numeros es: "<<resta(a, b)<<endl;
            break;
        case 3:
            doble(a, b);
            cout<<"El doble de los numeros es: " <<a<<" y "<<b<<endl;
            break;
        case 4:
            mitad(a, b);
            cout<<"La mitad de los numeros es: "<<a<<" y "<<b<<endl;
            break;
        default:
            cout<<"Opción no válida."<<endl;
            break;
    }

    return 0;
}
