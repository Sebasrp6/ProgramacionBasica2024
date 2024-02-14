//Ejercicio 7 - Semana 6, Informacion de estudiantes
#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
    double calificacion;
};

int main() {
    Alumno estudiante;

    cout<<"Ingrese el nombre del estudiante: ";
    getline(cin, estudiante.nombre);

    cout<<"Ingrese la edad del estudiante: ";
    cin>>estudiante.edad;

    cout<<"Ingrese la calificacion del estudiante: ";
    cin>>estudiante.calificacion;

    cout<<"\nInformacion del estudiante:\n";
    cout<<"Nombre: " << estudiante.nombre << "\n";
    cout<<"Edad: " << estudiante.edad << "\n";
    cout<<"Calificacion: " << estudiante.calificacion << "\n";

    return 0;
}
