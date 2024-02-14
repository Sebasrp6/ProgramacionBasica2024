//Ejercicio 8 - Semana 6, Libros
#include <iostream>
#include <string>
using namespace std;

struct Libro1 {
    string titulo;
    string autor;
    int anoPublicacion;
};

int main() {
    Libro1 libro;

    cout << "Ingrese el titulo del libro: ";
    getline(cin, libro.titulo);

    cout << "Ingrese el autor del libro: ";
    getline(cin, libro.autor);

    cout << "Ingrese el ano de publicacion del libro: ";
    cin >> libro.anoPublicacion;

    cout << "\nInformacion del libro:\n";
    cout << "Titulo: " << libro.titulo << "\n";
    cout << "Autor: " << libro.autor << "\n";
    cout << "Ano de publicacion: " << libro.anoPublicacion << "\n";

    return 0;
}
