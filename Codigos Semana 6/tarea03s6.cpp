//Ejercicio 3 - Semana 6, ¿Cuantas veces esta un elemento ingresado en el vector?
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<char> CaracteresD{'a','e','i','a','o','e','u','a','a','e','1','2','3','3','6','9','0','0','0'};
    char caracterb;
    cout<<"Ingresa un caracter, preferiblemente una letra o numero: ";
    cin>>caracterb;
    int conteo=0;
     for (char c : CaracteresD) {
        if (c == caracterb) {
            conteo++;
        }
    }
    cout<<"Las veces que se repite el caracter es: "<<conteo;
    return 0;
}
