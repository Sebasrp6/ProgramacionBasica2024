//Ejercicio 6 - Semana 6, Matriz Concatenada
#include <iostream>
#include <string>
using namespace std;

int main() {
    int f;
    int c;
    cout<<"Ingresa el numero de filas: ";
    cin>>f;
    cout<<"Ingresa el numero de columnas: ";
    cin>>c;
    
    string matriz1[f][c];

    
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Ingrese una palabra en la posicion [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    
    cout << "Matriz original:\n";
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << matriz1[i][j] << " ";
        }
        cout << "\n";
    }

    
    cout << "Matriz concatenada:\n";
    for (int i = 0; i < f; ++i) {
        string filaConcatenada;
        for (int j = 0; j < c; ++j) {
            filaConcatenada += matriz1[i][j] + " ";
        }
        cout << filaConcatenada << " ";
    }

    return 0;
}
