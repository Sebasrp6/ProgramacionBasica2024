//Ejercicio 9 - Semana 6, Promedio de calificaciones
#include <iostream>
#include <string>
using namespace std;

const int LimiteC = 5; 

struct Estudiante1 {
    string nombre;
    int calificaciones[LimiteC];
};

int main() {
    Estudiante1 estudiante;

    cout<<"Ingrese el nombre del estudiante: ";
    getline(cin, estudiante.nombre);

    cout<<"Ingrese las calificaciones del estudiante: ";
    for (int i = 0; i < LimiteC; ++i) {
        cin>>estudiante.calificaciones[i];
    }

    double sumaCalificaciones = 0;

    for (int i = 0; i < LimiteC; ++i) {
        sumaCalificaciones += estudiante.calificaciones[i];
    }

    double promedio = sumaCalificaciones / LimiteC;

    cout << "\nPromedio de calificaciones para " << estudiante.nombre << ": " << promedio << "\n";

    return 0;
}
