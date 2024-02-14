//Ejercicio 5 - Semana 7, Concatenar palabras
#include <iostream>
#include <string>
using namespace std;
void concatenarStrings(string &s1, const string &s2) {
    s1 += s2;
}

int main() {
    string palabra1 = "Hola, ";
    const string palabra2 = "mundo!";
    concatenarStrings(palabra1, palabra2);
    cout << "Concatenacion: " << palabra1 << endl;

    return 0;
}
