#include <iostream>
#include <string>

// Usando el namespace std para evitar el prefijo std::
using namespace std;

// Definición de la clase Persona
class Persona {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    // Método para obtener el nombre
    string obtenerNombre() {
        return nombre;
    }

    // Método para obtener la edad
    int obtenerEdad() {
        return edad;
    }
};

int main() {
    // Creación de objetos de la clase Persona
    Persona persona1("Juan", 30);
    Persona persona2("María", 25);

    // Acceso a los métodos de los objetos
    cout << "Nombre de la persona 1: " << persona1.obtenerNombre() << endl;
    cout << "Edad de la persona 1: " << persona1.obtenerEdad() << " años" << endl;

    cout << "Nombre de la persona 2: " << persona2.obtenerNombre() << endl;
    cout << "Edad de la persona 2: " << persona2.obtenerEdad() << " años" << endl;

    return 0;
}
