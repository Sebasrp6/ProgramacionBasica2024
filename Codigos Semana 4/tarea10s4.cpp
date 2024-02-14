#include <iostream>
#include <cctype> 
#include <string>

using namespace std;

int contarVocales(const string& oracion) {
    int contador = 0;

    for (char caracter : oracion) {
        char caracterMinuscula = tolower(caracter);

        if (caracterMinuscula == 'a' || caracterMinuscula == 'e' || caracterMinuscula == 'i' ||
            caracterMinuscula == 'o' || caracterMinuscula == 'u') {
            contador++;
        }
    }

    return contador;
}

int main() {
    string oracion;

    cout<<"Ingrese una oracion: ";
    cin>>oracion;
    int cantidadVocales = contarVocales(oracion);
    cout << "La cantidad de vocales en la oracion es: " << cantidadVocales << endl;

    return 0;
}
